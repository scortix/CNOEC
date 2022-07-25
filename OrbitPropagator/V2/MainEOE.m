close all
clear
clc

%% Parameters Definition and Initialization
% Forward Euler: x(k+1) = x(k) + Ts*xdot(k)
Ts = 200; % Discrete time step
tmax = 4e6; % Maximum time
ratio = 1000; % Per quanto tempo mantiene l'input
Tmax = 5;
Isp = 5000;
g0 = 9.81;
m0 = 1500;
t = 0:Ts:tmax; % Time vector
y = zeros(6,length(t)); % State vector initialization
lu = (length(t)-1)/ratio+1;
u = ones(3,lu)/sqrt(3); % Input vector initialization 
tf = 6e4; % Initial guess for final time
u = [180/180*pi;0.1*ones(lu,1);reshape(u,numel(u),1);tf]; % Initial guess vector
alpha = 1; % 1 for optimal time

useInit = false;
if useInit
    load("initGuess.mat")
    u(1:length(uoptlin)) = uoptlin;
end

% orb_in = struct('a', 1e4, 'e', 0.2, 'i', pi/4, 'OM', pi/2, 'om', pi/2, 'theta', 0);
% orb_end = struct('a', 1.5e4, 'e', 0.25, 'i', pi/3, 'OM', pi/3, 'om', pi/4, 'theta', 0);
% orb_in = struct('a', 12000, 'e', 0.2, 'i', pi/4, 'OM', pi/2, 'om', pi/2, 'theta', 0); % Initial orbit
% orb_end = struct('a', 36000, 'e', 0.7, 'i', pi/3, 'OM', pi/3, 'om', pi/4, 'theta', 0); % Final orbit
orb_in = struct('a', 2.4364e+04, 'e', 0.7306, 'i', 4.9742e-01, 'OM', 0, 'om', 0, 'theta', 0); % Initial orbit
orb_end = struct('a', 42165, 'e', 0, 'i', 0, 'OM', 0, 'om', 0, 'theta', 0); % Final orbit

y0 = COE2EOE(orb_in); % Initial condition conversion to EOE state
y(:,1) = y0; % Set first state vector equal to initial condition
ybar = COE2EOE(orb_end); % Desired state vector

%% Initial guess computation
myoptimset;
% gaussFun = @(u) costGauss2(u(end),Ts,y0,ybar,u(1),m0,Tmax/g0/Isp,Tmax,u(2:1+lu),reshape(u(2+lu:end-1),3,lu),ratio,alpha);
opt.method = "BFGS";
opt.method = "Steepest";
opt.gradmethod = "CD";
opt.nitermax = 500;
C = [1 zeros(1,4*lu+1);
    -1 zeros(1,4*lu+1);
    zeros(lu,1) eye(lu) zeros(lu,3*lu+1);
    zeros(lu,1) -eye(lu) zeros(lu,3*lu+1);
    zeros(1,4*lu+1) 1;
    zeros(1,4*lu+1) -1];
d = [0;
    -2*pi;
    zeros(lu,1);
    -ones(lu,1);
    5e5;
    -tmax];
% uoptlinInit = mySQP(gaussFun,u,[],[],C,d,5,1+0*(lu),opt);

fun = @(x,computeGrad) costGaussGrad2_mex(x,tmax,Ts,y0,ybar,m0,Tmax/g0/Isp,Tmax,ratio,0,computeGrad,[],[],C,d);
uoptlinInit = mySQPGrad(fun,u,opt);
% uoptlinInit = u;

%% Optimization routine
d = [0;
    -2*pi;
    zeros(lu,1);
    -ones(lu,1);
    1e6;
    -3e6];
u = ones(3,lu)/sqrt(3);
uoptlinInit = [180/180*pi;0.1*ones(lu,1);reshape(u,numel(u),1);tf];
% gaussFun = @(u) costGauss(u(end),Ts,y0,ybar,u(1),m0,Tmax/g0/Isp,Tmax,u(2:1+lu),reshape(u(2+lu:end-1),3,lu),ratio,alpha);
myoptimset;
% opt.method = "Gauss-Newton";
opt.method = "Steepest";
opt.method = "BFGS";
opt.nitermax = 300;
opt.tolconstr = 1e-3;
% uoptlin2 = mySQP(gaussFun,uoptlin,[],[],C,d,5,1+0*(lu),opt);
alpha = [0; 0.33; 0.66; 0.999];
alphaCell = cell(length(alpha),4);
uoptlinInit(end) = 2e6;
for k = 4:length(alpha)
    alpha(k) = 0.99;
    fun = @(x,computeGrad) costGaussGradtf_mex(x,tmax,Ts,y0,ybar,m0,Tmax/g0/Isp,Tmax,ratio,alpha(k),computeGrad,[],[],C,d);
    [uoptlin,cost,~,~,useq] = mySQPGrad(fun,uoptlinInit,opt);
    tf = uoptlin(end);
    dm = (cost/1e4-tf*alpha(k)/1e5)/(1-alpha(k))*m0;
    alphaCell(k,:) = {alpha(k),tf,dm,uoptlin};
end



%% Post-processing optimized variables
uoptlin = uoptlinInit;
% uoptlin = alphaCell{4,4};
theta0 = uoptlin(1);
csiopt = uoptlin(2:1+lu);
qopt = reshape(uoptlin(2+lu:end-1),3,lu);
tf = uoptlin(end);
x0 = EOE2COE(y0);
x0(6) = theta0;
orb_in.theta = x0(6);
y0 = COE2EOE(x0);
y(:,1) = y0;
ind = find(t>tf,1,'first');
% csiopt(ceil(ind/ratio):end) = 0;
csisim = zeros(1,length(t));
qsim = zeros(3,length(t));
for k = 1:length(csiopt)
    csisim(:,(k-1)*ratio+1:k*ratio) = repmat(csiopt(k),1,ratio);
    qsim(:,(k-1)*ratio+1:k*ratio) = repmat(qopt(:,k),1,ratio);
end
m = zeros(length(t),1);
%% Plotting Results
m(1) = m0;
% for k = 1:length(t)
%     u = Tmax/m(k)*csisim(k)*qsim(:,k)/norm(qsim(:,k));
%     y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u,398600);
%     m(k+1) = m(k) - Ts*Tmax/g0/Isp*csisim(k);
% end
coeffT = Tmax/g0/Isp;
for k = 1:length(t)-1
    ku = ceil(k/ratio);
    u = Tmax/m(k)*csiopt(ku)*qopt(:,ku)/norm(qopt(:,ku))/1e3;
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u,398600);
    m(k+1) = m(k) - Ts*coeffT*csiopt(ku);
%     tCost = tCost + (y(:,k+1)-ybar)'*Q*(y(:,k+1)-ybar)*exp(t(k)/5e3);
end

x = y;
utot = zeros(3,length(t));
for i = 1:length(t)
    ku = ceil(i/ratio);
    utot(:,i) = Tmax/m((ku-1)*ratio+1)*csiopt(ku)*qopt(:,ku)/norm(qopt(:,ku));
end

for k = 1:size(y,2)
    x(:,k) = EOE2COE(y(:,k)); % Conversion of EOE state vector to COE state vector
end
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

