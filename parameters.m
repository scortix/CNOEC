close all
clear all
clc

%J = 1e4* [2 0 0; 0 2 0; 0 0 2.5];
J = [0.09 0 0; 0 0.14 0; 0 0 0.07]; % Inertia Matrix
e = 0.1; %Orbit eccentricity
mu = 398600; %Gravitational Constant
par = [14000 e deg2rad(53) deg2rad(30) 0]; % Orbital parameters (semimajor axis, eccentricity, inclination...
% Longitude of the ascending node, argument of periapsis)
nt0 = 0; %Starting point


%% baricentre position
solar_par.xg = [0.03 0 0]'; % [m] Center of mass

%% main body geometry
solar_par.Ab = [ 0.1*0.2 , 0.1*0.2 , 0.1*0.3 , 0.1*0.3 , 0.2*0.3 , 0.2*0.3];  % vector that contains main body surface [m^2]

% distance from geometry center of main body (column vector) [m]
db1 = [0.15 0 0]';
db2 = [0 0.1 0]';
db3 = [0 0 0.05]';
solar_par.rb = [db1 -db1 db2 -db2 db3 -db3];

solar_par.rhosb = 0.5;
solar_par.rhodb = 0.1;

% normal vector of main body's surface
n1 = [1; 0; 0];
n3 = [0; 1; 0];
n5 = [0; 0; 1];
n2 = -n1;
n4 = -n3;
n6 = -n5;
solar_par.nb = [ n1 n2 n3 n4 n5 n6 ];

%% solar pannel geometry
solar_par.As = [0.2*0.3, 0.2*0.3, 0.2*0.3, 0.2*0.3];    % vector that contains solar pannel surface [m^2]

% distance from geometry center of solar pannel (column vector) [m]
dp1 = [0.15 0.25 0]';
dp2 = [0.15 -0.25 0]';
solar_par.rp = [dp1 dp1 dp2 dp2];
   
solar_par.rhosp = 0.8;
solar_par.rhodp = 0.1;

% normal vector of solar pannel's surface
n7 = [1; 0; 0];
n8 = -n7;
n9 = [1; 0; 0];
n10 = -n7;
solar_par.ns = [ n7 n8 n9 n10 ]; 
 
% Creation of bus to use in Simulink
solar_par_info = Simulink.Bus.createObject(solar_par);
solar_par_bus = evalin('base', solar_par_info.busName);