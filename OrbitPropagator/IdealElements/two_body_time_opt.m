function [err] = two_body_time_opt(r0,v0,m0,rf,vf,lambda0_t,g0,Isp,Tmax,mu)
%
% The function compute the error btw the integration of the low thrust
% dynamycs and the given final conditions, given a guess of the initial
% costate.
%
% INPUT:
% r0 = Initial position [km].
% v0 = Initial velocity [km/sec].
% m0 = Initial mass.
% rf = Final position [km].
% vf = Final velocity [km/sec].
% lambda0_t = Initial guess for costate and final integraion time.
% g0 = Earth surface gravity acceleration [km/s^2].
% Isp = Specific impulse [s].
% Tmax = Thrust [kg*km/s^2].
% mu = Planetary gravity constant.
%
% OUTPUT:
% err = Position, velocity and mass costate error at final time.
%

% Divide the initial costate and the integration time.
lambda0 = lambda0_t(1:7);
t = lambda0_t(8);
tspan = [0 t]; 

% Initial integraion conditions.
X0 = [r0;v0;m0;lambda0]; 

% Perform the integration.
options = odeset('RelTol',1e-13);
[~,X] = ode45(@(t,X) two_body_LT_dynamics(t,X,g0,Isp,mu,Tmax),tspan,X0,options);

% Save the final integration value.
r_int=X(end,1:3);
v_int=X(end,4:6);
m_int=X(end,7);
lam_r_int=X(end,8:10);
lam_v_int=X(end,11:13);
lam_m_int=X(end,14);

% Compute the Hamiltonian at final time.
St=-norm(lam_v_int)*Isp*g0/m_int-lam_m_int;
H_fin= 1+ dot(lam_r_int,v_int)-mu/norm(r_int)^3*dot(r_int,lam_v_int)+Tmax/(Isp*g0)*St;

% Compute the error.
Xf = [rf;vf;0;0];
Xf_int = [r_int';v_int'; lam_m_int;H_fin];
err = Xf_int-Xf; 
end