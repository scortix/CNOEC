function uout = MainNMPC(yref,uref,y0)

% Parameters Definition and Initialization
% Forward Euler: x(k+1) = x(k) + Ts*xdot(k)
% ytraj state trajectory
% utraj input trajectory
% y0 current state

Ts = 100; % Discrete time step
% ratio = 1; % Per quanto tempo mantiene l'input
M = 100; % Prediction horizon
Tmax = 50;
Isp = 3000;
g0 = 9.81;
m0 = 735;
coeffT = Tmax/g0/Isp;
Q = eye(6); % state weights matrix
R = eye(3); % input weights matrix
E = eye(6); % slack variables weights matrix

% tmax of the trajectory must be >= Ts*M, in case not a new point must be
% computed

x = zeros(15*M,1);

for k = 1:M
    x(3*(k-1)+1:3*k) = uref(:,k);
    x(3*M+6*(k-1)+1:3*M+6*k) = yref(:,k);
end

% Cd = 2.2; % drag coefficient
% m = 1; % mass
% rho_table = rho_tab();

% options = optimoptions(@fminunc,'Display','iter',...
%     'MaxFunctionEvaluation', 5e6, 'StepTolerance', 1e-10,...
%     'UseParallel', false, 'MaxIterations', 500,...
%     'OptimalityTolerance', 1e-8); % options for fminunc solver
options = optimoptions(@fmincon,'Display','iter',...
    'MaxFunctionEvaluation', 5e6, 'StepTolerance', 1e-8,...
    'UseParallel', false, 'MaxIterations', 200,...
    'OptimalityTolerance', 1e-8, 'Algorithm', 'sqp'); % options for fminunc solver
myoptimset;

% ff = @(ufun) cost_mex(tmax,Ts,y0,reshape(ufun(2:end),3,length(t)),ybar,umax,ufun(1));
% uopt = mySQP(ff,u,[],[], -[eye(length(u)); -eye(length(u))],-[[2*pi;umax+0*u(2:end)];[0;umax+0*u(2:end)]],0,0,opt);

NMPCfun = @(x) NMPC_cost(M,Ts,x,y0,yref,Q,R,E,coeffT);
opt.method = "Gauss-Newton";
opt.method = "BFGS";
opt.method = "Steepest";
opt.gradmethod = "CD";

xopt = mySQP(NMPCfun,x,[],[],[],[],6*M,1+M,opt);

uout = xopt(3,1);