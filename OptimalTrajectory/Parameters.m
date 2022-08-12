% Integration Parameters
Ts = 100; % Discrete time step [s]
tmax = 6e5; % Maximum time [s]
ratio = 10; % length(t)/length(u)
t = 0:Ts:tmax; % Time vector
tu = 0:Ts*ratio:tmax; % Time vector for input variable
lu = (length(t)-1)/ratio+1; % Length of the input vector

% Orbit Parameters
mu = 398600; % Earth Standard Gravitational Parameter [km^3/s^2]
orb_in = struct('a', 8000, 'e', 0, 'i', pi/4, 'OM', 0, 'om', 0, 'theta', 0); % Initial orbit
orb_end = struct('a', 10000, 'e', 0.2, 'i', pi/4, 'OM', 0, 'om', pi/3, 'theta', 0); % Final orbit
zEOE0 = COE2EOE(orb_in); % Initial condition conversion to EOE state
zEOEbar = COE2EOE(orb_end); % Desired state vector in EOE

% Thruster Parameters
Tmax = 10; % Maximum Thrust [N]
Isp = 1000; % Specific Impulse [s]
g0 = 9.80665; % Standard Earth Gravity [m/s^2]
m0 = 1000; % Initial Mass

% Optimizer Parameters
alpha = 0:0.2:1; % Vector of cost function weight parameter
opt = myoptimset; % Optimizer Options

cscheme = {'#AA4499','#EE7733','#0072BD','#CC3311','#228833','#e6ab02'};

