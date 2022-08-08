
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
Q = eye(6);
R = 1;

x0 = zeros(3*M,1);
x0(1:M,1) = csiRef;
x0(M+1:2*M,1) = angleRef;

%%
opt = myoptimset();
mass = 1000;
coder.extrinsic("opt_problem");
xopt = opt_problem(x0,M,Ts,zEOE0,yRef,Q,R,coeffT,mass,opt,Tmax);
%%
xi = xopt(1);
u = xi*[sin(xopt(M+1,1))*cos(xopt(2*M+1,1)) cos(xopt(M+1,1))*cos(xopt(2*M+1,1)) sin(xopt(2*M+1,1))]'*Tmax/mass/1e3;


function xopt = opt_problem(x0,M,Ts,zEOE0,yRef,Q,R,coeffT,mass,opt,Tmax)
fun = @(x) NMPCcost(M,Ts,x,zEOE0,yRef,Q,R,coeffT,mass,Tmax);
xopt = mySQP(fun,x0,[],[],[],[],0,3,opt);
end

function J = NMPCcost(M,Ts,x,y0,yref,Q,R,coeffT,m0,Tmax)

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
%       x: optimization variables 3*M inputs,  6*M states (current state given)
%       variables in this order
%       Q: state trajectory weights 6x6
%       R: fuel consumption weight

% t = 0:Ts:Ts*M; % Time vector

yhat = zeros(6,M+1); % Initialization of state vectors
yhat(:,1) = y0; % Set initial conditions
u = zeros(3,M); % Initialization of input vectors
xi = zeros(1,M); % Initialization of fuel utilization
qAngle = zeros(1,M); % Initialization of qAngle
rAngle = zeros(1,M); % Initialization of rAngle
m = zeros(1,M); m(1) = m0; % Initialization of mass

for k = 1:M
    xi(1,k) = x(k,1);
    qAngle(1,k) = x(M+k,1);
    rAngle(1,k) = x(2*M+k,1);
end

F = zeros(7*M,1);
% Cost Function Calculation
for k = 1:M
    u(:,k) = Tmax/m(k)/1e3*xi(1,k)*[sin(qAngle(k))*cos(rAngle(k)) cos(qAngle(k))*cos(rAngle(k)) sin(rAngle(k))]';
    yhat(:,k+1) = yhat(:,k)+Ts*EOEDerivatives(0,yhat(:,k),u(:,k),398600);
    F(k,1) = sqrt(R)*xi(1,k);
    F(M+6*(k-1)+1:M+6*k,1) = sqrt(Q)*(yref(:,k)-yhat(:,k+1));
    if k < M
        m(k+1) = m(k) - Ts*xi(1,k)*coeffT;
    end
end

r = min((yhat(1,:)./(1+sqrt(yhat(2,:).^2+yhat(3,:).^2).*cos(yhat(6,:)-atan2(yhat(3,:),yhat(2,:)))))');
minXi = min(xi);
maxXi = max(xi);
J = [F'*F;[r-6378.1 1-maxXi minXi]';F];
end