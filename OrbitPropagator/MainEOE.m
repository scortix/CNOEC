close all
clear all
clc

%% Parameters Definition and Initialization
% Forward Euler: x(k+1) = x(k) + Ts*xdot(k)
Ts = 200; % Discrete time step
tmax = 2e4; % Maximum time
umax = 1e-3; % Maximum input value
t = 0:Ts:tmax; % Time vector
y = zeros(6,length(t)); % State vector initialization
u = 1e-4*ones(3,length(t)); % Input vector initialization
u = [120/180*pi;reshape(u,numel(u),1)];


orb_in = struct('a', 1e4, 'e', 0.2, 'i', pi/4, 'OM', pi/2, 'om', pi/2, 'theta', 0);
orb_end = struct('a', 1.5e4, 'e', 0.25, 'i', pi/3, 'OM', pi/3, 'om', pi/4, 'theta', 0);


y0 = COE2EOE(orb_in); % Initial condition conversion to EOE state
y(:,1) = y0; % Set first state vector equal to initial condition

Cd = 2.2; % drag coefficient
m = 1; % mass
rho_table = rho_tab();

%% Optimization
ybar = COE2EOE(orb_end); % Desired state vector
dy = abs(ybar-y0); % Absolute difference between IC and ybar

% Weight sum of states
% Jx = dx'*Q*dx
% Consider x = x(1:5) cause the last state is continuosly changing and
% much less important than other five
% dx = (x-xbar)./(dy) where dy is used as a normalization factor
% Q = coef*diag([1 1 1 1 1 0]) The last 0 is to avoid considering x(6)
% For now, coef is set equal to 1
%%
options = optimoptions(@fminunc,'Display','iter',...
    'MaxFunctionEvaluation', 5e6, 'StepTolerance', 1e-10,...
    'UseParallel', false, 'MaxIterations', 20,...
    'OptimalityTolerance', 1e-8); % options for fminunc solver
[uopt, fval, ~, out] = fminunc(@(u) cost(tmax,Ts,y0,ybar,umax,u), u, options); % Actual Optimization

options = optimoptions(@fminunc,'Display','iter',...
    'MaxFunctionEvaluation', 5e6, 'StepTolerance', 1e-10,...
    'UseParallel', false, 'MaxIterations', 1500,...
    'OptimalityTolerance', 1e-8); % options for fminunc solver
for k = 1:4
    [uopt, fval, ~, out] = fminunc(@(u) cost_mex(tmax,Ts,y0,ybar,umax,u), uopt, options); % Actual Optimization
end

%%
y0(6) = y0(6)+uopt(1);
u = reshape(uopt(2:end),3,length(t));
x0 = EOE2COE(y0);
orb_in.theta = x0(6);
%% Plotting Results
for k = 1:length(t)
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u(:,k),398600);
end

x = y;
for k = 1:size(y,2)
    x(:,k) = EOE2COE(y(:,k)); % Conversion of EOE state vector to COE state vector
end
fig = Orb_Earth_plot(orb_in, orb_end, x, u);
