% Script to load the useful data before simulation, just set the alpha
% value down below and run the code before running the simulation in the
% respective simulink file desired (sim_model_dist0X for NMPC with
% disturbance knowledge). In the end there's commented code to test the
% first iteration of the NMPC

close all
clear
clc

set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultAxesTickLabelInterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');
Parameters % Load Parameters
load("simulation.mat") % loading trajectory


alpha = 0.2; % 0.2, 0.8 or 1.0

% (Even 0.0, 0.4, 0.6 but references in simulink must be chanced in signal
% builders)

sel = alpha*5+1;

xt = makima(tu,conCell{sel,2}(2:lu+1)',t); % Throttle trajectory
qt = makima(tu,conCell{sel,2}(lu+2:end)',t); % Angle trajectory
zt = conCell{sel,3}; % State trajectory
dt = zeros(3,length(xt)); % Input direction trajectory
for k = 1:length(xt)
    dt(:,k) = xt(k)*[sin(qt(k)) cos(qt(k)) 0]';
end

xopt00 = reshape(dt(:,1:M),3*M,1); % First iteration NMPC initial guess

% Initial orbit in COE
orb_in = struct('a', 8000, 'e', 0, 'i', pi/4, 'OM', 0, 'om', 0, 'theta', 0);
% Final orbit in COE
orb_end = struct('a', 10000, 'e', 0.2, 'i', pi/4, 'OM', 0, 'om', pi/3, 'theta', 0);
% Initial condition conversion to EOE state
zEOE0 = COE2EOE(orb_in);
zEOE0(6) = zt(6,1);
% Desired state vector in EOE
zEOEbar = COE2EOE(orb_end);
zEOEbar(6) = zt(6,end);
endOrbUp = Ts*EOEDerivatives(0,zEOEbar,zeros(3,1),mu);
d = endOrbUp(6); % True longitude update once the targer orbit is reached

% %% NMPC test
% (Lines to test the first NMPC iteration and build the cost functions'
% mex files)
% zEOE0 = COE2EOE(initOrbit_v);
% 
% Ts = 100;
% csiRef = traj_csi(:,1:M);
% angleRef = traj_angle(:,1:M);
% yRef = traj_state(:,1:M);
% 
% Q = eye(6);
% R = 1;
% 
% x0 = zeros(3*M,1);
% x0(1:M,1) = csiRef;
% x0(M+1:2*M,1) = angleRef;
% mass = 1000;
% J = NMPC_cost(M,Ts,x0,zEOE0,yRef,Q,R,coeffT,mass,Tmax);
% J = NMPC_costDist(M,Ts,x0,zEOE0,yRef,Q,R,coeffT,mass,Tmax,x_par,y_par,z_par,S,Cd,rho_table);
% %%
% coder.extrinsic("opt_problem");
% xopt = opt_problem(x0,M,Ts,zEOE0,yRef,Q,R,coeffT,mass,Tmax);
% 
% % xi = xopt(1);
% % u = xi*[sin(xopt(M+1,1))*cos(xopt(2*M+1,1)) cos(xopt(M+1,1))*cos(xopt(2*M+1,1)) sin(xopt(2*M+1,1))]'*Tmax/mass/1e3;
