close all
clear all
clc

%% Parameters Definition and Initialization
% Forward Euler: x(k+1) = x(k) + Ts*xdot(k)
Ts = 100; % Discrete time step
tmax = 1e5; % Maximum time
t = 0:Ts:tmax; % Time vector
y = zeros(6,length(t)); % State vector initialization
u = zeros(3,length(t)); u(1,:) = 1e-4; % Input vector initialization
y0 = COE2EOE([1e4 0.2 pi/4 pi/2 pi/3 0]'); % Initial condition conversion to EOE state
y(:,1) = y0; % Set first state vector equal to initial condition

%% Optimization
ybar = COE2EOE([1.1e4; 0.25; pi/4; 0; pi/3; 1]); % Desired state vector
dy = abs(ybar-y0); % Absolute difference between IC and ybar

% Weight sum of states
% Jx = dx'*Q*dx
% Consider x = x(1:5) cause the last state is continuosly changing and
% much less important than other five
% dx = (x-xbar)./(dy) where dy is used as a normalization factor
% Q = coef*diag([1 1 1 1 1 0]) The last 0 is to avoid considering x(6)
% For now, coef is set equal to 1

options = optimoptions(@fminunc,'Display','iter',...
    'MaxFunctionEvaluation', 5e5, 'StepTolerance', 1e-10,...
    'UseParallel', false, 'MaxIterations', 50,...
    'OptimalityTolerance', 1e-8); % options for fminunc solver

[u, fval, ~, out] = fminunc(@(x) cost(tmax,Ts,y0,x,ybar), u, options); % Actual Optimization


%% Plotting Results
for k = 1:length(t)
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u(:,k),398600);
end
plotEOE(y');

x = y;
for k = 1:size(y,2)
    x(:,k) = EOE2COE(y(:,k)); % Conversion of EOE state vector to COE state vector
end
