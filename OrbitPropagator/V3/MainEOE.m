close all
clear
clc

%%
% mu = 398600;
% r0 = [0 -29597.43 0]';
% v0 = [1.8349 0.0002 3.1783]';
% rf = [0 -29617.43 0]';
% vf = [1.8371 0.0002 3.1755]';
% 
% [orb_in.a, orb_in.e, orb_in.i, orb_in.om, orb_in.OM, orb_in.theta] = rv2paraorb(r0,v0,mu);
% [orb_end.a, orb_end.e, orb_end.i, orb_end.om, orb_end.OM, orb_end.theta] = rv2paraorb(rf,vf,mu);
% return





%% Parameters Definition and Initialization
% Forward Euler: x(k+1) = x(k) + Ts*xdot(k)
Ts = 100; % Discrete time step
tmax = 2e5; % Maximum time
ratio = 100; % Per quanto tempo mantiene l'input
Tmax = 50;
Isp = 3000;
g0 = 9.81;
m0 = 735;
t = 0:Ts:tmax; % Time vector
y = zeros(6,length(t)); % State vector initialization
lu = (length(t)-1)/ratio+1;
u = zeros(lu,1); % Input vector initialization 
tf = 9.999e4; % Initial guess for final time
u = [0/180*pi;
    0.5+u;
    u+pi/2;
    tf]; % Initial guess vector

orb_in = struct('a', 12000, 'e', 0.1, 'i', pi/4, 'OM', 0, 'om', 0, 'theta', 0); % Initial orbit
orb_end = struct('a', 13000, 'e', 0.3, 'i', pi/4, 'OM', 0, 'om', pi/4, 'theta', 0); % Final orbit

y0 = COE2EOE(orb_in); % Initial condition conversion to EOE state
y(:,1) = y0; % Set first state vector equal to initial condition
ybar = COE2EOE(orb_end); % Desired state vector

%% Initial guess computation
myoptimset;
C = [1 zeros(1,2*lu+1);
    -1 zeros(1,2*lu+1);
    zeros(lu,1) eye(lu) zeros(lu,lu+1);
    zeros(lu,1) -eye(lu) zeros(lu,lu+1);
    zeros(1,2*lu+1) 1;
    zeros(1,2*lu+1) -1];
d = [0;
    -2*pi;
    zeros(lu,1);
    -ones(lu,1);
    0;
    -tmax];

%% Optimization routine

myoptimset;
opt.method = "BFGS";
opt.nitermax = 70;
opt.tolconstr = 1e-3;
alpha = 0:0.25:1;
alphaCell = cell(length(alpha),5);

ratioVec = [100 50 25];
for k = 1:length(alpha)
    uoptlin = u;
    
    for i = 1:length(ratioVec)
        ratio = ratioVec(i);
        fun = @(x) cost_mex(x, Ts, tmax, y0, ybar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k));
        if i == 1 && alpha(k) < -0.1
            fun = @(x) cost_mex(x, Ts, tmax, y0, ybar, ratio, Tmax, Tmax/g0/Isp, m0, 0.8);
            [uoptlin,~,~,~,~] = mySQP(fun,uoptlin,[],[],C,d,1,1,opt);
            fun = @(x) cost_mex(x, Ts, tmax, y0, ybar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k));
        end
        if i ~= 1
            opt.tolx = 1e-9;
            fun = @(x) cost_mex(x, Ts, tmax, y0, ybar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k)); 
            tOld = 0:ratioVec(i-1)*Ts:tmax;
            tNew = 0:ratio*Ts:tmax;
            
            uoptlinNew = [uoptlin(1);interp1(tOld,uoptlin(2:end/2),tNew)';interp1(tOld,uoptlin(end/2+1:end-1),tNew)';uoptlin(end)];
            uoptlinOld = uoptlin;
            uoptlin = uoptlinNew;
        end
            lu = (length(t)-1)/ratio+1;

            C = [1 zeros(1,2*lu+1);
                -1 zeros(1,2*lu+1);
                zeros(lu,1) eye(lu) zeros(lu,lu+1);
                zeros(lu,1) -eye(lu) zeros(lu,lu+1);
                zeros(1,2*lu+1) 1;
                zeros(1,2*lu+1) -1];
            d = [0;
                -2*pi;
                zeros(lu,1);
                -ones(lu,1);
                0;
                -tmax];

        [uoptlin,cost,~,~,useq] = mySQP(fun,uoptlin,[],[],C,d,1,1,opt);
    end
    [~,y,tCost,m] = cost_mex(uoptlin, Ts, tmax, y0, ybar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k));
    alphaCell(k,:) = {alpha(k),uoptlin,y,tCost,m};
end

%%
figure()
for k = 1:length(alpha)
    m = alphaCell{k,5};
    tCost = alphaCell{k,4};
    semilogy(m0-m,tCost,'Marker','o','MarkerSize',10);
    hold on
end
grid on



return
%% Post-processing optimized variables
% uoptlin = uoptlinInit;
% uoptlin = alphaCell{4,4};
theta0 = uoptlin(1);
csiopt = uoptlin(2:1+lu);
qopt = uoptlin(2+lu:end-1);
tf = uoptlin(end);
x0 = EOE2COE(y0);
x0(6) = theta0;
orb_in.theta = x0(6);
y0 = COE2EOE(x0);
y(:,1) = y0;
ind = find(t>tf,1,'first');
% csiopt(ceil(ind/ratio):end) = 0;

csisim = interp1(tNew,csiopt,t);
qsim = interp1(tNew,qopt,t);

m = zeros(length(t),1);
%% Plotting Results
m(1) = m0;
% for k = 1:length(t)
%     u = Tmax/m(k)*csisim(k)*qsim(:,k)/norm(qsim(:,k));
%     y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u,398600);
%     m(k+1) = m(k) - Ts*Tmax/g0/Isp*csisim(k);
% end
utot = zeros(3,length(t));
coeffT = Tmax/g0/Isp;
for k = 1:length(t)-1
    ku = ceil(k/ratio);
    u = Tmax/m(k)*csisim(k)*[sin(qsim(k)); cos(qsim(k)); 0]/1e3;
    utot(:,k) = u;
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u,398600);
    m(k+1) = m(k) - Ts*coeffT*csisim(k);
%     tCost = tCost + (y(:,k+1)-ybar)'*Q*(y(:,k+1)-ybar)*exp(t(k)/5e3);
end

x = y;
% utot = zeros(3,length(t));
% for i = 1:length(t)
%     ku = ceil(i/ratio);
%     utot(:,i) = Tmax/m(i)*csiopt(ku)*qopt(:,ku)/norm(qopt(:,ku));
% end

for k = 1:size(y,2)
    x(:,k) = EOE2COE(y(:,k)); % Conversion of EOE state vector to COE state vector
end
indtf = find(vecnorm((x([1 2 5],:)-x([1 2 5],end))./x([1 2 5],end))<=1e-3,1);
tf = t(indtf);
%%
fig = Orb_Earth_plot(orb_in, orb_end, x, utot);
fig2 = figure();
plot(t,m);
yyaxis right
plot(t, csisim(1:length(t)))


%%
saveOpt = false;
if saveOpt
    save("initGuess.mat","uoptlin")
end


