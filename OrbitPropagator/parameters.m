function [mu, par, ] = parameters()

close all
clear all
clc

%% Parameters definitions
%J = 1e4* [2 0 0; 0 2 0; 0 0 2.5];
J = [0.09 0 0; 0 0.14 0; 0 0 0.07]; % Inertia Matrix    
e = 0.1; %Orbit eccentricity
mu = 398600; %Gravitational Constant
par = [14000 e deg2rad(53) deg2rad(30) deg2rad(15)];
% semimajor axis (a), eccentricity (e), inclination of orbital plane (i),
% longitude of the ascending node(OM), argument of the periapsis(om) 
% Orbital parameters (semimajor axis, eccentricity, inclination...
% Longitude of the ascending node, argument of periapsis)
T = 2*pi*sqrt(par(1)^3/mu); % Orbital period
nt0 = 0; %Starting point
% load('IGRF.mat') % Magnetic field coefficients (row -> n; column -> m+1; 3rd dimension -> g and h)
% Creation of bus to use in Simulink
Sch_info = Simulink.Bus.createObject(Sch);
Sch_bus = evalin('base', Sch_info.busName);
m_par = [.1 .1 .1]; % Parasitic magnetic induction


%% baricentre position
solar_par.xg = [0.03 0 0]'; % [m] Center of mass

%% main body geometry
l1 = 0.3;
l2 = 0.2;
l3 = 0.1;

A1 = l2*l3;
A2 = l1*l3;
A3 = l1*l2;

V = l1*l2*l3;
ro = 10000; % [kg/m^3] hypotetical material density
m = ro*V;
% distance from geometry center of main body (column vector) [m]
db1 = [l1/2 0 0]';
db2 = [0 l2/2 0]';
db3 = [0 0 l3/2]';

solar_par.Ab = [ A1 A1 A2 A2 A3 A3];
% vector that contains main body surface [m^2]


solar_par.rb = [db1 -db1 db2 -db2 db3 -db3];

solar_par.rhosb = 0.5;
solar_par.rhodb = 0.1;

% normal vector of main body's surface
n1 = [1 0 0]';
n2 = [0 1 0]';
n3 = [0 0 1]';
solar_par.nb = [ n1 -n1 n2 -n2 n3 -n3 ];

%% solar panel geometry
solar_par.As = [0.2*0.3, 0.2*0.3, 0.2*0.3, 0.2*0.3];
% vector that contains solar panel surface [m^2]

% distance from geometry center of solar panel (column vector) [m]
dp1 = [0.15 0.25 0]';
dp2 = [0.15 -0.25 0]';
solar_par.rp = [dp1 dp1 dp2 dp2];
   
solar_par.rhosp = 0.8;
solar_par.rhodp = 0.1;

% normal vector of solar panel's surface
n4 = [1 0 0]';
solar_par.ns = [ n4 -n4 n4 -n4 ]; 
 
% Creation of bus to use in Simulink
solar_par_info = Simulink.Bus.createObject(solar_par);
solar_par_bus = evalin('base', solar_par_info.busName);

%% Sensor Parameters
ARW = (1/4*deg2rad([0.2 0.2 0.2]/sqrt(3600))).^2; %[0.2 deg/h^.5]
RRW = (1/4*deg2rad([0.3 0.3 0.3]/3600)).^2; % [0.3 deg/h]
%sampling rate
tsg = 1e-1;
%gyro inertia parameters 
Ir = 1e-2; % Keep e-2 for development. At the end inertia must be lowered
Jz = 2e-2; % Keep e-2 for development. At the end inertia must be lowered
%tuning parameter for visco-elastic reaction torque
k=10;
%tuning law for c for fastest convergence
c_gyro = 2*sqrt(k*Jz); 
%angular velocity of gyro wheel (100 deg/s)
wr = 100*pi/180;