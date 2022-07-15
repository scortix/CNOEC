close all
clear all
clc

%% Parameters Definition and Initialization
% Forward Euler: x(k+1) = x(k) + Ts*xdot(k)
Ts = 100; % Discrete time step
tmax = 15e4; % Maximum time
ratio = 5;
umax = 1e-1; % Maximum input value
t = 0:Ts:tmax; % Time vector
y = zeros(6,length(t)); % State vector initialization
u = zeros(3,(length(t)-1)/ratio+1); %u(1,:) = 0; % Input vector initialization 
u(:,1) =1e-4;
u = [180/180*pi;reshape(u,numel(u),1)];

useInit = false;
if useInit
    load("initGuess.mat")
    u(1:length(uoptlin)) = uoptlin;
else
    u(2:3:end)=umax/1e3;
end
% u = reshape(u,numel(u),1);


% orb_in = struct('a', 1e4, 'e', 0.2, 'i', pi/4, 'OM', pi/2, 'om', pi/2, 'theta', 0);
% orb_end = struct('a', 1.5e4, 'e', 0.25, 'i', pi/3, 'OM', pi/3, 'om', pi/4, 'theta', 0);
orb_in = struct('a', 12000, 'e', 0.2, 'i', pi/4, 'OM', pi/2, 'om', pi/2, 'theta', 0);
orb_end = struct('a', 36000, 'e', 0.7, 'i', pi/3, 'OM', pi/3, 'om', pi/4, 'theta', 0);


y0 = COE2EOE(orb_in); % Initial condition conversion to EOE state
y(:,1) = y0; % Set first state vector equal to initial condition
yfmin = y;

Cd = 2.2; % drag coefficient
m = 1; % mass
rho_table = rho_tab();

%% Optimization
ybar = COE2EOE(orb_end); % Desired state vector
dy = abs(ybar-y0); % Absolute difference between IC and ybar
%%
% Weight sum of states
% Jx = dx'*Q*dx
% Consider x = x(1:5) cause the last state is continuosly changing and
% much less important than other five
% dx = (x-xbar)./(dy) where dy is used as a normalization factor
% Q = coef*diag([1 1 1 1 1 0]) The last 0 is to avoid considering x(6)
% For now, coef is set equal to 1

% options = optimoptions(@fminunc,'Display','iter',...
%     'MaxFunctionEvaluation', 5e6, 'StepTolerance', 1e-10,...
%     'UseParallel', false, 'MaxIterations', 500,...
%     'OptimalityTolerance', 1e-8); % options for fminunc solver
options = optimoptions(@fmincon,'Display','iter',...
    'MaxFunctionEvaluation', 5e6, 'StepTolerance', 1e-8,...
    'UseParallel', false, 'MaxIterations', 200,...
    'OptimalityTolerance', 1e-8, 'Algorithm', 'sqp'); % options for fminunc solver
myoptimset;

% ff = @(ufun) cost_mex(tmax,Ts,y0,reshape(ufun(2:end),3,length(t)),ybar,umax,ufun(1));
% uopt = mySQP(ff,u,[],[], -[eye(length(u)); -eye(length(u))],-[[2*pi;umax+0*u(2:end)];[0;umax+0*u(2:end)]],0,0,opt);

gaussFun = @(u) costGauss_mex(tmax,Ts,y0,reshape(u(2:end),3,(length(t)-1)/ratio+1),ybar,umax,u(1),ratio);
opt.method = "Gauss-Newton";
opt.method = "BFGS";
opt.method = "Steepest";
opt.gradmethod = "FD";

uoptlin = mySQP(gaussFun,u,[],[], -[eye(length(u)); -eye(length(u))],-[[2*pi;umax+0*u(2:end)];[0;umax+0*u(2:end)]],0,1+0*((length(t)-1)/ratio+1),opt);

theta0 = uoptlin(1);
uopt = reshape(uoptlin(2:end),3,(length(t)-1)/ratio+1);
% [uoptfmin, fval, ~, out] = fmincon(@(ufun) cost_mex(tmax,Ts,y0,reshape(ufun(1:end),3,length(t)),ybar,umax,0), u, [eye(length(u)); -eye(length(u))],[umax+0*u(1:end);umax+0*u(1:end)], [], [], [], [], [], options); % Actual Optimization

%%
% uopt = reshape(uopt,3,length(t));
% uoptfmin = reshape(uoptfmin,3,length(t));
x0 = EOE2COE(y0);
x0(6) = theta0;
orb_in.theta = x0(6);
y0 = COE2EOE(x0);
y(:,1) = y0;
%% Plotting Results
for k = 1:length(t)
    ku = ceil(k/ratio);
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),uopt(:,ku),398600);

%     yfmin(:,k+1) = yfmin(:,k) + Ts*EOEDerivatives(t(k),yfmin(:,k),uoptfmin(:,k),398600);
end

x = y;
% xfmin = yfmin;
utot = zeros(3,length(t));
for i = 1:length(t)
    ku = ceil(i/ratio);
    utot(:,i) = uopt(:,ku);
end

for k = 1:size(y,2)
    x(:,k) = EOE2COE(y(:,k)); % Conversion of EOE state vector to COE state vector
%     xfmin(:,k) = EOE2COE(yfmin(:,k));
end
fig = Orb_Earth_plot(orb_in, orb_end, x, utot);
% fig = Orb_Earth_plot(orb_in, orb_end, xfmin, uoptfmin,fig);


%%
saveOpt = false;
if saveOpt
    save("initGuess.mat","uoptlin")
end


