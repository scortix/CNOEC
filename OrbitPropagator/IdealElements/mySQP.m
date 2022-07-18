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


fprintf('|  Iteration   |      Fx       | ||grad(Fx)||  |  ||grad(Lx)|| |  Feasibility  |  Step Length  |  F-Variation  |\r')
fprintf('|--------------|---------------|---------------|---------------|---------------|---------------|---------------|\r')

fx0 = fun(x0);
if length(fx0) > 1+p+q
    F = @(x) [zeros(1+p+q,length(fx0)-1-p-q); eye(length(fx0)-1-p-q)]'*fun(x);
end
f = @(x) fun(x)'*[1; zeros(length(fx0)-1,1)];
g = @(x) [zeros(1,p); eye(p); zeros(length(fx0)-1-p,p)]'*fun(x);
h = @(x) [zeros(1+p,q); eye(q); zeros(length(fx0)-1-p-q,q)]'*fun(x);
gs = @(x) g(x);
hs = @(x) h(x);

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

dx = zeros(options.nitermax+1, 1); dx(1) = 1;
df = zeros(options.nitermax+1, 1); df(1) = 1;
mu = zeros(options.nitermax+1, q)'; mu(:,1) = zeros(q,1);
lam = zeros(options.nitermax+1, p)'; lam(:,1) = zeros(p,1);
xk = zeros(options.nitermax+1, length(x0))'; xk(:,1) = x0;
fxk = zeros(options.nitermax+1, 1); fxk(1) = f(x0);
gxk = zeros(options.nitermax+1, p)'; gxk(:,1) = g(x0);
hxk = zeros(options.nitermax+1, q)'; hxk(:,1) = h(x0);
tau = zeros(q,1); sigma = zeros(p,1);
optQP = optimoptions("quadprog","Display","final-detailed",'Algorithm','interior-point-convex','MaxIterations',1e4,...
    'OptimalityTolerance',1e-8);

pkstar = ones(size(x0));
niter = 1;
while true
    if ~strcmp(options.method,'BFGS') || niter == 1
        gradfxk = mygradcalc(f,xk(:,niter), fxk(niter), options.gradmethod);
        gradgxk = [A', mygradcalc(gs,xk(:,niter), gxk(size(A,1)+1:end,niter), options.gradmethod)];
        gradhxk = [C', mygradcalc(hs,xk(:,niter), hxk(size(C,1)+1:end,niter), options.gradmethod)];
        gradlxk = gradfxk-gradgxk*lam(:,niter)-gradhxk*mu(:,niter);
    end
    if strcmp(options.method, 'Gauss-Newton')
        gradFxk = mygradcalc(F,xk(:,niter), F(xk(:,niter)), options.gradmethod);
    end

    feasibility = max(norm(gxk(:,niter),'inf'),-min(hxk(:,niter)));
    if niter >= 1000
        niterStr = "|\t\t%d   ";
    else
        niterStr = "|\t\t%d\t   ";
    end
    if fxk(niter) < 0
        fprintf(strcat(niterStr,"| %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |\n"),...
            niter, fxk(niter),norm(gradfxk),norm(gradlxk),feasibility,dx(niter),df(niter));
    else
        fprintf(strcat(niterStr,"|  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |\n"),...
            niter, fxk(niter),norm(gradfxk),norm(gradlxk),feasibility,dx(niter),df(niter));
    end

    if (abs(gradlxk'*pkstar)<=options.tolgrad || dx(niter)<= options.tolx || df(niter)<=options.tolf)...
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
        elseif df(niter)<=options.tolf
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

    switch options.method
        case "Steepest"
            Hk = eye(length(x0));
        case 'Gauss-Newton'
            Hk = 2*(gradFxk*gradFxk');
            Hk = Hk + 1e-14*eye(size(Hk));
        case 'BFGS'
            if niter == 1
                Hk = eye(length(x0));
            end
    end

    % SOLVE QP
    [pkstar, ~, ~, ~, lb]  = quadprog(Hk, gradfxk, -gradhxk', hxk(:,niter), -gradgxk', gxk(:,niter), [], [], [], optQP);
%     pkstar = pkstar/norm(pkstar);
    lambdakstar = -lb.eqlin; mukstar = lb.ineqlin;
    dlambdak = lambdakstar - lam(:,niter);
    dmuk = mukstar - mu(:,niter);
    for i = 1:p
        sigma(i) = max(abs(lambdakstar(i)), (sigma(i)+abs(lambdakstar(i)))/2);
    end
    for i = 1:q
        tau(i) = max(abs(mukstar(i)), (tau(i)+abs(mukstar(i)))/2);
    end
    
    T = @(x) f(x) + sigma'*abs(g(x)) - tau'*(h(x).*(h(x)<0));
    Txk = fxk(niter) + sigma'*abs(gxk(:,niter)) - tau'*(hxk(:,niter).*(hxk(:,niter)<0));
    DTpk = gradfxk'*pkstar - sigma'*abs(gxk(:,niter)) - (tau.*(hxk(:,niter)<0))'*gradhxk'*pkstar;
    tk = mymeritlinesearch(T, Txk, DTpk, xk(:,niter), pkstar, options.lstkmax, options.lsbeta, options.lsc, options.lsnitermax);
    xk(:,niter+1) = xk(:,niter) + tk*pkstar;
    lam(:,niter+1) = lam(:,niter) + tk*dlambdak;
    mu(:,niter+1) = mu(:,niter) + tk*dmuk;

    

    fxk(niter+1) = f(xk(:,niter+1));
    gxk(:,niter+1) = g(xk(:,niter+1));
    hxk(:,niter+1) = h(xk(:,niter+1));


    if strcmp(options.method, 'BFGS')
        gradlxkup = gradfxk-gradgxk*lam(:,niter+1)-gradhxk*mu(:,niter+1);
        gradfxk = mygradcalc(f,xk(:,niter+1), fxk(niter+1), options.gradmethod);
        gradgxk = [A', mygradcalc(gs,xk(:,niter+1), gxk(size(A,1)+1:end,niter+1), options.gradmethod)];
        gradhxk = [C', mygradcalc(hs,xk(:,niter+1), hxk(size(C,1)+1:end,niter+1), options.gradmethod)];
        gradlxk = gradfxk-gradgxk*lam(:,niter+1)-gradhxk*mu(:,niter+1);
        
        y = gradlxk-gradlxkup;
        s = xk(:,niter+1)-xk(:,niter);
        if y'*s <= options.gamma*s'*Hk*s
            ynew = y + (options.gamma*s'*Hk*s-s'*y)/(s'*Hk*s-s'*y)*(Hk*s-y);
            if all(ynew~=0) && all(~isnan(ynew))
                y = ynew;
            elseif any(ynew == 0) && all(~isnan(ynew))
                y = ynew + 1e-14*(ynew==0);
            else
                y = 1e-14 * ones(length(y),1);
            end
           
        end
        if all(s==0)
            s = 1e-14*pkstar/norm(pkstar);
        end
        Hk = Hk - ((Hk*s)*(Hk*s)')/(s'*Hk*s) + (y*y')/(s'*y);
        if any(eig(Hk)<0)
            warning("Hk");
        end
        if isequal(Hk,zeros(size(Hk)))
            Hk = eye(size(Hk))*1e-14;
        end
        if ~isequal(Hk,Hk')
            Hk  = (Hk+Hk')/2;
        end
    end

    dx(niter+1) = norm(xk(:,niter+1)-xk(:,niter))/max(eps,norm(xk(:,niter)));
    df(niter+1) = abs(fxk(niter+1)-fxk(niter))/max(eps,abs(fxk(niter)));
    niter = niter+1;
end

xstar = xk(:,niter); 
xsequence = xk(:,1:niter); 
fxstar = fxk(niter);





