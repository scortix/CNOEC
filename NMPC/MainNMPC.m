
% Parameters Definition and Initialization
close all
clear
clc

% Thruster Parameters
Tmax = 10; % Maximum Thrust [N]
Isp = 1000; % Specific Impulse [s]
g0 = 9.80665; % Standard Earth Gravity [m/s^2]
m0 = 1000; % Initial Mass

tmax = 6e5; % maximum time for trajectory

Ts = 100; % Discrete time step
ratio = 10; % Per quanto tempo mantiene l'input
lu = tmax/Ts/ratio+1;
t = 0:Ts:tmax;
topt = 0:Ts*ratio:tmax;
stopTime = 6e6;

M = 20; % Prediction horizon
coeffT = Tmax/g0/Isp;
mu = 398600; % Earth Standard Gravitational Parameter [km^3/s^2]
S = 1; % Spacecraft Surface [m^2]
Cd = 1; % Drag coefficient [?]
rho_table = rho_tab();

load("simFinal.mat") % loading trajectory
traj_csi = makima(topt,alphaCell{2,2}(2:lu+1)',t);
traj_angle = makima(topt,alphaCell{2,2}(lu+2:end)',t);
traj_state = alphaCell{2,3};
traj_dir = zeros(3,length(traj_csi));
for k = 1:length(traj_csi)
    traj_dir(:,k) = traj_csi(k)*[sin(traj_angle(k)) cos(traj_angle(k)) 0]';
end

xopt00 = reshape(traj_dir(:,1:M),3*M,1);

orb_in = struct('a', 8000, 'e', 0, 'i', pi/4, 'OM', 0, 'om', 0, 'theta', 0); % Initial orbit
orb_end = struct('a', 10000, 'e', 0.2, 'i', pi/4, 'OM', 0, 'om', pi/3, 'theta', 0); % Final orbit
initOrbit_v = [orb_in.a orb_in.e orb_in.i orb_in.OM orb_in.om traj_state(6,1)]';
endOrbit_v = COE2EOE([orb_end.a orb_end.e orb_end.i orb_end.OM orb_end.om traj_state(6,end)]');
endOrbUp = Ts*EOEDerivatives(0,endOrbit_v,zeros(3,1),398600);
d = endOrbUp(6);
% Moon future positions
t_sim = 0:Ts:stopTime;
load("moonModelParams.mat");

%% NMPC test
zEOE0 = COE2EOE(initOrbit_v);

Ts = 100;
csiRef = traj_csi(:,1:M);
angleRef = traj_angle(:,1:M);
yRef = traj_state(:,1:M);

Q = eye(6);
R = 1;

x0 = zeros(3*M,1);
x0(1:M,1) = csiRef;
x0(M+1:2*M,1) = angleRef;
mass = 1000;

% J = NMPC_cost(M,Ts,x0,zEOE0,yRef,Q,R,coeffT,mass,Tmax);
%%
coder.extrinsic("opt_problem");
xopt = opt_problem(x0,M,Ts,zEOE0,yRef,Q,R,coeffT,mass,Tmax);

xi = xopt(1);
u = xi*[sin(xopt(M+1,1))*cos(xopt(2*M+1,1)) cos(xopt(M+1,1))*cos(xopt(2*M+1,1)) sin(xopt(2*M+1,1))]'*Tmax/mass/1e3;
%% Comparison
load("zEOE.mat")
tcomp = t(1:length(zEOEsim));
stateTrajComp = traj_state(:,1:length(zEOEsim));
figure()

subplot(2,3,1)
plot(tcomp,zEOEsim(2,:))
hold on
plot(tcomp,stateTrajComp(1,:))

subplot(2,3,2)
plot(tcomp,zEOEsim(3,:))
hold on
plot(tcomp,stateTrajComp(2,:))

subplot(2,3,3)
plot(tcomp,zEOEsim(4,:))
hold on
plot(tcomp,stateTrajComp(3,:))

subplot(2,3,4)
plot(tcomp,zEOEsim(5,:))
hold on
plot(tcomp,stateTrajComp(4,:))

subplot(2,3,5)
plot(tcomp,zEOEsim(6,:))
hold on
plot(tcomp,stateTrajComp(5,:))

subplot(2,3,6)
plot(tcomp,zEOEsim(7,:))
hold on
plot(tcomp,stateTrajComp(6,:))
legend("sim","traj")

%% traj inspector
figure()
for k = 1:6
    subplot(2,3,k)
    plot(t,traj_state(k,:))
end

