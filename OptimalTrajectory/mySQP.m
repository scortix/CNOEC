function [xstar, fxstar, niter, exitflag, xsequence] = mySQP(fun, x0, A, b, C, d, p, q, options)

% MYSQP Attempts to solve the problem:
%                   min f(x)  
%                     s.t.
%                   A*x = b
%                  C*x >= d
%                  g(x) = 0
%                 h(x) >= 0
% and, if successful, returns a local minimizer xstar and the related local
% optimum fxstar=f(xstar). The solver employs a Sequential Quadratic programming
% optimization scheme and back-tracking line search with l-1 norm merit function
% and Armijo condition.
%
%   INPUTS:
%           fun         =   function providing the scalar cost function value 
%                           f(x) and the vectors of p nonlinear equality
%                           constraints g(x), g:R^n->R^p, and q nonlinear 
%                           inequality constraints h(x)
%           x0          =   initial guess for the optimization variables
%           A           =   matrix defining linear equality constraints
%           b           =   vector defining linear equality constraints
%           C           =   matrix defining linear inequality constraints
%           d           =   vector defining linear inequality constraints
%           p           =   number of nonlinear equality constraints
%           q           =   number of nonlinear inequality constraints
%           options     =   optimization options prepared with myoptimset
%                           command
%
%   OUTPUTS:
%           xstar       =   exit value, either a local minimizer or the
%                           value of x at the last iterate
%           fxstar      =   cost function evaluated at xstar
%           niter       =   number of employed iterations 
%           exitflag    =   termination condition:
%                           -2: max iterations reached, unfeasible point
%                           -1: max. number of iterations reached
%                            1: local minimum possible, gradient condition
%                            2: local minimum possible, step size condition
%                            3: local minimum possible, cost decrease condition
%           xsequence   =   sequence of iterations {xk}

if strcmp(options.display, "Iter")
    fprintf('|  Iteration   |      Fx       | ||grad(Fx)||  |  ||grad(Lx)|| |  Feasibility  |  Step Length  |  F-Variation  |    LS Iter    |\r')
    fprintf('|--------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|\r')
end
fx0 = fun(x0);

%% Define functions f (or F), g and h
gradJ = @(x) mygradcalc(fun,x, fun(x), options);
if strcmp(options.Hessmethod,"BFGS") || strcmp(options.Hessmethod,"SD")    
    fmatr = [1; zeros(length(fx0)-1,1)];
    gmatr = [zeros(1,p); eye(p); zeros(length(fx0)-1-p,p)];
    hmatr = [zeros(1+p,q); eye(q); zeros(length(fx0)-1-p-q,q)];
    f = @(x) [1; zeros(length(fx0)-1,1)]'*fun(x);
    g = @(x) gmatr'*fun(x);
    h = @(x) hmatr'*fun(x);
elseif strcmp(options.Hessmethod,"GN")
    n = length(fx0)-p-q;
    Fmatr = [eye(n); zeros(length(fx0)-n,n)];
    gmatr = [zeros(n,p); eye(p); zeros(length(fx0)-n-p,p)];
    hmatr = [zeros(n+p,q); eye(q); zeros(length(fx0)-n-p-q,q)];
    F = @(x) Fmatr'*fun(x);
    f = @(x) F(x)'*F(x);
    g = @(x) gmatr'*fun(x);
    h = @(x) hmatr'*fun(x);
end

%% Update the constraints using linear constraints
if ~isempty(A)
    if length(b) ~= size(A,1) || size(A,2) ~= length(x0)
        error("A and/or b are not correct\n");
    end
    p = p+size(A,1);
    g = @(x) [A*x-b; g(x)];
end

if ~isempty(C)
    if length(d) ~= size(C,1) || size(C,2) ~= length(x0)
        error("C and/or d are not correct\n");
    end
    q = q+size(C,1);
    
    h = @(x) [C*x-d; h(x)];
end

%% Preallocate memory for computed variables
dx = zeros(options.nitermax+1, 1); dx(1) = 1;
df = zeros(options.nitermax+1, 1); df(1) = 1;
mu = zeros(options.nitermax+1, q)'; mu(:,1) = zeros(q,1);
lam = zeros(options.nitermax+1, p)'; lam(:,1) = zeros(p,1);
xk = zeros(options.nitermax+1, length(x0))'; xk(:,1) = x0;
fxk = zeros(options.nitermax+1, 1);
if strcmp(options.Hessmethod, 'GN')
    Fxk = F(x0);
    fxk(1) = Fxk'*Fxk;
else
    fxk(1) = f(x0);
end
gxk = zeros(options.nitermax+1, p)'; gxk(:,1) = g(x0);
hxk = zeros(options.nitermax+1, q)'; hxk(:,1) = h(x0);
tau = zeros(q,1); sigma = zeros(p,1);
pkstar = ones(size(x0));

%% Initialize niter to 1
niter = 1;
niterLS = 0;

%% Start the optimization routine
while true

    %% Compute all gradients (for BFGS only at the first iteration)
    if ~strcmp(options.Hessmethod,'BFGS') || niter == 1
        gradJxk = gradJ(xk(:,niter));
        if strcmp(options.Hessmethod, 'GN')
            gradFxk = gradJxk*Fmatr;
            gradfxk = (2*Fxk'*gradFxk')';
        else
            gradfxk = gradJxk*fmatr;
        end
        gradgxk = [A', gradJxk*gmatr];
        gradhxk = [C', gradJxk*hmatr];
        gradlxk = gradfxk-gradgxk*lam(:,niter)-gradhxk*mu(:,niter);
    end

    %% Check terminating conditions
    if strcmp(options.display,"Iter")
        feasibility = max(norm(gxk(:,niter),'inf'),-min(hxk(:,niter)));
        if niter >= 1000
            niterStr = "|\t\t%d   ";
        else
            niterStr = "|\t\t%d\t   ";
        end
        if fxk(niter) < 0
            fprintf(strcat(niterStr,"| %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |\n"),...
                niter, fxk(niter),norm(gradfxk),norm(gradlxk),feasibility,dx(niter),df(niter),niterLS);
        else
            fprintf(strcat(niterStr,"|  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |\n"),...
                niter, fxk(niter),norm(gradfxk),norm(gradlxk),feasibility,dx(niter),df(niter),niterLS);
        end
    end
    if (abs(gradlxk'*pkstar)<=options.tolgrad || dx(niter)<= options.tolx || df(niter)<=options.tolfun)...
            && norm(gxk(:,niter),'inf')<=options.tolconstr && min(hxk(:,niter))>=-options.tolconstr
        
        fprintf("Local minimum found that satisfies the constraints.\n\n")

        if abs(gradlxk'*pkstar)<=options.tolgrad
            exitflag = 1;
            fprintf("Optimization completed because the objective function is non-decreasing in\n" + ...
                "feasible directions, to within the value of the optimality tolerance,\n" + ...
                "and constraints are satisfied to within the value of the constraint tolerance.\n")
        elseif dx(niter)<= options.tolx
            exitflag = 2;
            fprintf("Optimization completed because the step length is below the specified\n" + ...
                "minimum update value, and constraints are satisfied to within the value\n" + ...
                "of the constraint tolerance.\n")
        elseif df(niter)<=options.tolfun
            exitflag = 3;
            fprintf("Optimization completed because the decrement of the objective function is\n" + ...
                "below the minimum specified value, and constraints are satisfied to within\n" + ...
                "the value of the constraint tolerance.\n")
        end
        break
    elseif niter>=options.nitermax && norm(gxk(:,niter),'inf')<=options.tolconstr && min(hxk(:,niter))>=-options.tolconstr
        exitflag = -1;
        fprintf("Solver stopped beacuse the maximum number of iterations has been reached.\n" + ...
            "The solution satisfies the constraints\n")
        break
    elseif niter>=options.nitermax && (norm(gxk(:,niter),'inf')>options.tolconstr || min(hxk(:,niter))<options.tolconstr)
        fprintf("Solver stopped beacuse the maximum number of iterations has been reached.\n" + ...
            "The solution does not satisfies the constraints\n")
        exitflag = -2;
        break
    end

    %% Compute the QP Hessian Hk
    switch options.Hessmethod
        case "SD"
            Hk = eye(length(x0));
        case 'GN'
            Hk = 2*(gradFxk*gradFxk');
            Hk = Hk + options.GN_sigma*eye(size(Hk));
        case 'BFGS'
            if niter == 1
                Hk = eye(length(x0));
            end
    end

    %% Solve LP and QP problems
    AQPeq = gradgxk'; bQPeq = gxk(:,niter);
    AQP = gradhxk'; bQP = hxk(:,niter);
    [pkstar, ~, ~, ~, lb]  = quadprog(Hk, gradfxk, -AQP, bQP, -AQPeq, bQPeq, [], [], [], options.QPoptions);
    lambdakstar = -lb.eqlin; mukstar = min(lb.ineqlin,1e15);
    dlambdak = lambdakstar - lam(:,niter);
    dmuk = mukstar - mu(:,niter);
    for i = 1:p
        sigma(i) = max(abs(lambdakstar(i)), (sigma(i)+abs(lambdakstar(i)))/2);
    end
    for i = 1:q
        tau(i) = min(max(abs(mukstar(i)), (tau(i)+abs(mukstar(i)))/2),1e15);
    end
    
    %% Backtracking line-search and update state and Lagrange multipliers
    T = @(x) f(x) + sigma'*abs(g(x)) - tau'*(h(x).*(h(x)<0));
    Txk = fxk(niter) + sigma'*abs(gxk(:,niter)) - tau'*(hxk(:,niter).*(hxk(:,niter)<0));
    DTpk = gradfxk'*pkstar - sigma'*abs(gxk(:,niter)) - (tau.*(hxk(:,niter)<0))'*gradhxk'*pkstar;
    [tk, xk(:,niter+1), ~, niterLS] =...
        mymeritlinesearch(T, Txk, DTpk, xk(:,niter), pkstar, options.ls_tkmax, options.ls_beta, options.ls_c, options.ls_nitermax);
    lam(:,niter+1)  =   lam(:,niter) + tk*dlambdak;
    mu(:,niter+1)   =   mu(:,niter) + tk*dmuk;

    %% Compute updated cost function and constraints
    if strcmp(options.Hessmethod, 'GN')
        Fxk = F(xk(:,niter+1));
        fxk(niter+1) = Fxk'*Fxk;
    else
        fxk(niter+1) = f(xk(:,niter+1));
    end
    gxk(:,niter+1) = g(xk(:,niter+1));
    hxk(:,niter+1) = h(xk(:,niter+1));

    %% For BFGS only, update Hk matrix
    if strcmp(options.Hessmethod, 'BFGS')
        gradlxkup = gradfxk-gradgxk*lam(:,niter+1)-gradhxk*mu(:,niter+1);
        gradJxk = gradJ(xk(:,niter));
        gradfxk = gradJxk*fmatr;
        gradgxk = [A', gradJxk*gmatr];
        gradhxk = [C', gradJxk*hmatr];
        gradlxk = gradfxk-gradgxk*lam(:,niter+1)-gradhxk*mu(:,niter+1);
        
        y = gradlxk-gradlxkup;
        s = xk(:,niter+1)-xk(:,niter);
        if y'*s <= options.BFGS_gamma*s'*Hk*s
            y = y + (options.BFGS_gamma*s'*Hk*s-s'*y)/(s'*Hk*s-s'*y)*(Hk*s-y);
        end
        if y'*s <= 0
            for attempt = 1:10
                indMin = find(y.*s == min(y.*s),1);
                y(indMin) = y(indMin)/2;                
                if y'*s > 0
                    break
                end
            end
            w = 1e-6;
            for attempt = 1:10
                v = 0*y;
                for j = 1:length(v)
                    if y(i)*w < 0 && y(i)*s(i)<0
                        v(i) = -y(i);
                    end
                end
                y = y + w*v;
                if y'*s > 0
                    break
                end
                w = 2*w;
            end
            if y'*s <= options.BFGS_gamma*s'*Hk*s
                y = y + (options.BFGS_gamma*s'*Hk*s-s'*y)/(s'*Hk*s-s'*y)*(Hk*s-y);
            end
        end
        if all(s==0)
            s = 1e-14*pkstar/norm(pkstar);
        end
        HkOld = Hk;
        [Uh,Sh] = svd(Hk*s);
        [Uy,Sy] = svd(y);
%         Hk = Hk - ((Hk*s)*(Hk*s)')/(s'*Hk*s) + (y*y')/(s'*y);
        Hk = Hk - (Uh*Sh*Sh'*Uh')/(s'*Hk*s) + (Uy*Sy*Sy'*Uy')/(s'*y);
        Hk = nearestSPD(Hk);
        if min(eig(Hk))/max(eig(Hk)) < -1e-6
            m = min(eig(Hk));
            warning(strcat("Hk is not positive definite - min(eig(Hk)) = ", num2str(m)));
            Hk = HkOld;
        end
        if isequal(Hk,zeros(size(Hk)))
            Hk = eye(size(Hk))*1e-14;
        end
        if ~isequal(Hk,Hk')
            Hk  = (Hk+Hk')/2;
        end
    end

    %% Update relative changes
    dx(niter+1) = norm(xk(:,niter+1)-xk(:,niter))/max(eps,norm(xk(:,niter)));
    df(niter+1) = abs(fxk(niter+1)-fxk(niter))/max(eps,abs(fxk(niter)));

    %% Increase number of iteration
    niter = niter+1;
end

%% Define output variables
xstar = xk(:,niter); 
xsequence = xk(:,1:niter); 
fxstar = fxk(niter);





