
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

M = 100; % Prediction horizon
coeffT = Tmax/g0/Isp;
mu = 398600; % Earth Standard Gravitational Parameter [km^3/s^2]
S = 1; % Spacecraft Surface [m^2]
Cd = 1; % Drag coefficient [?]
rho_table = rho_tab();

load("simFinal.mat") % loading trajectory
traj_csi = makima(topt,alphaCell{8}(2:lu+1)',t);
traj_angle = makima(topt,alphaCell{8}(lu+2:end)',t);
traj_state = alphaCell{14};

orb_in = struct('a', 8000, 'e', 0, 'i', pi/4, 'OM', 0, 'om', 0, 'theta', 0); % Initial orbit
orb_end = struct('a', 10000, 'e', 0.2, 'i', pi/4, 'OM', 0, 'om', pi/3, 'theta', 0); % Final orbit
initOrbit_v = [orb_in.a orb_in.e orb_in.i orb_in.OM orb_in.om traj_state(6,1)]';
endOrbit_v = [orb_end.a orb_end.e orb_end.i orb_end.OM orb_end.om traj_state(6,end)]';

%% Moon future positions
t_sim = 0:Ts:stopTime;
load("moonModelParams.mat");


%% Optimization settings

%%
% sim("sim_model.slx",stopTime)
% 
% % options = optimoptions(@fminunc,'Display','iter',...
% %     'MaxFunctionEvaluation', 5e6, 'StepTolerance', 1e-10,...
% %     'UseParallel', false, 'MaxIterations', 500,...
% %     'OptimalityTolerance', 1e-8); % options for fminunc solver
% options = optimoptions(@fmincon,'Display','iter',...
%     'MaxFunctionEvaluation', 5e6, 'StepTolerance', 1e-8,...
%     'UseParallel', false, 'MaxIterations', 200,...
%     'OptimalityTolerance', 1e-8, 'Algorithm', 'sqp'); % options for fminunc solver
% myoptimset;
% 
% % ff = @(ufu
% +n) cost_mex(tmax,Ts,y0,reshape(ufun(2:end),3,length(t)),ybar,umax,ufun(1));
% % uopt = mySQP(ff,u,[],[], -[eye(length(u)); -eye(length(u))],-[[2*pi;umax+0*u(2:end)];[0;umax+0*u(2:end)]],0,0,opt);
% 
% NMPCfun = @(x) NMPC_cost(M,Ts,x,y0,yref,Q,R,E,coeffT);
% opt.method = "Gauss-Newton";
% opt.method = "BFGS";
% opt.method = "Steepest";
% opt.gradmethod = "CD";
% 
% xopt = mySQP(NMPCfun,x,[],[],[],[],6*M,1+M,opt);
% 
% uout = xopt(3,1);

%% NMPC test
zEOE0 = COE2EOE(initOrbit_v);

Ts = 100;
csiRef = traj_csi(:,1:M);
angleRef = traj_angle(:,1:M);
yRef = traj_state(:,1:M);
%%
uref = zeros(3,M);
for k = 1:M
    uref(:,k) = csiRef(k)*[sin(angleRef(k)); cos(angleRef(k)); 0];
end
Q = eye(6);
R = eye(3);
E = eye(6);

x0 = zeros(15*M,1);

%%
for k = 1:M
    x0(3*(k-1)+1:3*k) = uref(:,k);
    x0(3*M+6*(k-1)+1:3*M+6*k) = yRef(:,k);
end

%%
opt = myoptimset();
mass = 1000;
coder.extrinsic("opt_problem");
xopt = opt_problem(x0,M,Ts,zEOE0,yRef,Q,R,E,coeffT,mass,opt);
%%
u = xopt(1:3,1);
xi = norm(u)*1e3*mass/Tmax;


function xopt = opt_problem(x0,M,Ts,zEOE0,yRef,Q,R,E,coeffT,mass,opt)
fun = @(x) NMPCcost(M,Ts,x,zEOE0,yRef,Q,R,E,coeffT,mass);
xopt = mySQP(fun,x0,[],[],[],[],6*M,1+M,opt);
end


function J = NMPCcost(M,Ts,x,y0,yref,Q,R,E,coeffT,m0)

%COST Function calculates the cost of the orbital maneuvre considering
%   arbitrary defined weigthed sums. The cost takes into account both the
%   state error and the input magnitude. In addition, an hard constraint on
%   the maximum value of the input has been considered.
%   As inputs, the function needs:
%       M: prediction horizon
%       Ts: time step of the discrete system
%       y0: initial condition vector
%       u0: input vector from trajectory
%       ybar: desired state vector
%       umax: maximum value for inputs
%       x: optimization variables 3*M inputs,  6*M states (current state given), 6*M slack
%       variables in this order
%       Q: state trajectory weights 6x6
%       R: input trajectory weights 3x3
%       E: slack variables weights  6x6 (xi for slack variables)

% t = 0:Ts:Ts*M; % Time vector

yhat = zeros(6,M+1); % Initialization of state vectors
yhat(:,1) = y0; % Set initial conditions
u = zeros(3,M); % Initialization of input vectors
xi = zeros(6,M); % Initialization of slack variables
g = zeros(6*M,1); % Initialization of equality constraints vector
hu = zeros(1,M); % Initialization of fuel consumption constraint
m = zeros(1,M); m(1) = m0; % Initialization of mass

for k = 1:M
    u(:,k) = x(3*(k-1)+1:3*k,1);
    yhat(:,k+1) = x(3*M+6*(k-1)+1:3*M+6*k,1);
    xi(:,k) = x(9*M+6*(k-1)+1:9*M+6*k,1);
end

F = zeros(15*M,1); 
% Cost Function Calculation
for k = 1:M
    F(3*(k-1)+1:3*k,1) = sqrt(R)*u(:,k);
    F(3*M+6*(k-1)+1:3*M+6*k,1) = sqrt(Q)*(yref(:,k)-yhat(:,k+1));
    F(9*M+6*(k-1)+1:9*M+6*k,1) = sqrt(E)*xi(:,k);
    g(6*(k-1)+1:6*k,1) = yhat(:,k)+Ts*EOEDerivatives(0,yhat(:,k),u(:,k),398600)-yhat(:,k+1)+xi(:,k);
    hu(1,k) = sqrt(u(1,k)^2+u(2,k)^2+u(3,k)^2)*1e3*m(k);
    if k < M
        m(k+1) = m(k) - Ts*hu(k)/m(k)/1e3;
    end
end

r = min((yhat(1,:)./(1+sqrt(yhat(2,:).^2+yhat(3,:).^2).*cos(yhat(6,:)-atan2(yhat(3,:),yhat(2,:)))))');
J = [F'*F;g;[r-6378.1 coeffT-hu]';F];
end