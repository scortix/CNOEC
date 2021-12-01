close all
clear all
clc

%% Parameters Definition and Initialization
% Forward Euler: x(k+1) = x(k) + Ts*xdot(k)
Ts = 100; % Discrete time step
tmax = 1e4; % Maximum time
umax = 1e-3; % Maximum input value
t = 0:Ts:tmax; % Time vector
y = zeros(6,length(t)); % State vector initialization
u = zeros(3,length(t)); u(1,:) = 1e-4; % Input vector initialization

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

options = optimoptions(@fminunc,'Display','iter',...
    'MaxFunctionEvaluation', 5e6, 'StepTolerance', 1e-10,...
    'UseParallel', false, 'MaxIterations', 250,...
    'OptimalityTolerance', 1e-8); % options for fminunc solver

[u, fval, ~, out] = fminunc(@(u) cost_mex(tmax,Ts,y0,u,ybar,umax), u, options); % Actual Optimization


%% Plotting Results
for k = 1:length(t)
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u(:,k),398600);
end

x = y;
for k = 1:size(y,2)
    x(:,k) = EOE2COE(y(:,k)); % Conversion of EOE state vector to COE state vector
end
fig = Orb_Earth_plot(orb_in, orb_end, x, u);
