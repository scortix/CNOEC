function uout = MainNMPC(ytraj,utraj)

% Parameters Definition and Initialization
% Forward Euler: x(k+1) = x(k) + Ts*xdot(k)
% ytraj placeholder for state trajectory
% utraj placeholder for input trajectory

Ts = 100; % Discrete time step

tmax = 1e4; % Maximum time
% ratio = 1; % Per quanto tempo mantiene l'input
umax = 1; % Maximum input value
M = 100; % Prediction horizon
Q = eye(6); % state weights matrix
R = eye(3); % input weights matrix
E = eye(6); % slack variables weights matrix

% tmax of the trajectory must be >= Ts*M, in case not a new point must be
% computed

y0 = zeros(6,1); % current state
yref = ytraj(6,M); % part of the state trajectory to be followed
uref = utraj(6,M); % part of the input trajectory to be followed

x = zeros(15*M,1);

for k = 1:M
    x(3*(k-1)+1:e*k) = uref(:,k);
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

NMPCfun = @(x) NMPC_cost(M,Ts,x,y0,yref,Q,R,E);
opt.method = "Gauss-Newton";
opt.method = "BFGS";
opt.method = "Steepest";
opt.gradmethod = "CD";

xopt = mySQP(NMPCfun,x,[],[], -[eye(6*M) zeros(6*M,9*M); -eye(6*M) zeros(6*M,9*M)],-[umax*ones(6*M,1);umax*ones(6*M,1)],6*M,1,opt);

uout = xopt(3,1);