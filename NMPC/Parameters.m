% Integration Parameters
Ts = 100; % Discrete time step [s]
tmax = 6e5; % Maximum time [s]
ratio = 10; % length(t)/length(u)
t = 0:Ts:tmax; % Time vector
tu = 0:Ts*ratio:tmax; % Time vector for input variable
lu = (length(t)-1)/ratio+1; % Length of the input vector

% Orbit Parameters
mu = 398600; % Earth Standard Gravitational Parameter [km^3/s^2]

% Thruster Parameters
Tmax = 10; % Maximum Thrust [N]
Isp = 1000; % Specific Impulse [s]
g0 = 9.80665; % Standard Earth Gravity [m/s^2]
m0 = 1000; % Initial Mass [kg]
coeffT = Tmax/g0/Isp;

% Optimizer Parameters
alpha = 0:0.2:1; % Vector of cost function weight parameter

% NMPC Parameters
M = 20; % Prediction horizon
S = 5; % Spacecraft Surface [m^2]
Cd = 2.2; % Drag coefficient
run("rhoTab.m") % rho table
load("moonModelParams.mat"); % Parameters for the moon position

set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultAxesTickLabelInterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');

cscheme = {'#AA4499','#EE7733','#0072BD','#CC3311','#228833','#e6ab02'};

