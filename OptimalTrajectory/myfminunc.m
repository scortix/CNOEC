function [xstar, fxstar, k, exitflag, x] = myfminunc(fun, x0, opt, grad, hess)

dxk = 1; dfk = 1;
Hk = eye(length(x0));
x = zeros(length(x0), opt.nitermax);
x(:,1) = x0;
k = 1;
lsiter = 0;
if strcmp(options.display, "Iter")
    fprintf('|  Iteration   |      Fx       | ||grad(Fx)||  |  Step Length  |  F-Variation  | LS-Iteration  |\r')
    fprintf('|--------------|---------------|---------------|---------------|---------------|---------------|\r')
end
if strcmp(opt.Hessmethod, 'GN')
    F = fun;
    fun = @(x) F(x)'*F(x);
    Fxk = F(x0);
end
fxk = fun(x0);

while true
    if (~strcmp(opt.Hessmethod, 'BFGS') || k == 1) && ~strcmp(opt.Hessmethod, 'GN') && ~strcmp(opt.Hessmethod, 'Newton')
        gradfxk = mygradcalc(fun, x(:,k), fxk, opt);
    elseif strcmp(opt.Hessmethod, 'GN')
        gradFxk = mygradcalc(F, x(:,k), Fxk, opt);
        gradfxk = 2*gradFxk'*Fxk;
    elseif strcmp(opt.Hessmethod, 'Newton')
        gradfxk = grad(x(:,k));
        hessfxk = hess(x(:,k));
    end
    if strcmp(options.display, "Iter")
        if k >= 1000
            niterStr = "|\t\t%d   ";
        else
            niterStr = "|\t\t%d\t   ";
        end
        if fxk < 0
            fprintf(strcat(niterStr,"| %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |\n"),...
                k, fxk,norm(gradfxk),dxk,dfk,lsiter);
        else
            fprintf(strcat(niterStr,"|  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |\n"),...
                k, fxk,norm(gradfxk),dxk,dfk,lsiter);
        end
    end
    switch opt.Hessmethod
        case 'SD'
            pk = -gradfxk;
        case 'GN'
            pk = -gradFxk\Fxk;
        case 'BFGS'
            pk = -Hk\gradfxk;
        case 'Newton'
            pk = -hessfxk\gradfxk;
    end
    if norm(gradfxk'*pk) <= opt.tolgrad || dxk <= opt.tolx || dfk <= opt.tolfun || k >= opt.nitermax
        xstar = x(:,k);
        fxstar = fxk;
        
        fprintf("Local minimum found\n\n")
        if norm(gradfxk'*pk) <= opt.tolgrad
            exitflag = 1;
        fprintf("Optimization completed because the objective function is non-decreasing in\n" + ...
                "feasible directions, to within the value of the optimality tolerance\n");
        elseif dxk <= opt.tolx
            exitflag = 2;
            fprintf("Optimization completed because the step length is below the specified\n" + ...
                "minimum update value\n");
        elseif dfk <= opt.tolfun
            exitflag = 3;
            fprintf("Optimization completed because the decrement of the objective function is\n" + ...
                "below the minimum specified value\n");
        else
            exitflag = -1;
            fprintf("Solver stopped beacuse the maximum number of iterations has been reached.\n");
        end
        break
    end
    
    [x(:,k+1), ~, lsiter] = mylinesearch(fun, fxk, gradfxk, x(:,k), pk, opt.ls_tkmax, opt.ls_beta, opt.ls_c, opt.ls_nitermax);

    if strcmp(opt.Hessmethod, 'BFGS')
        gradfxknew = mygradcalc(fun, x(:,k+1), fun(x(:,k+1)), opt);
        y = gradfxknew-gradfxk;
        s = x(:,k+1)-x(:,k);
        if y'*s <= opt.BFGS_gamma*s'*Hk*s
            y = y + (opt.BFGS_gamma*s'*Hk*s-s'*y)/(s'*Hk*s-s'*y)*(Hk*s-y);
        end
        Hk = Hk - (Hk*(s*s')*Hk)/(s'*Hk*s) + (y*y')/(s'*y);

        [Uh,Sh] = svd(Hk*s);
        [Uy,Sy] = svd(y);
        Hk = Hk - (Uh*Sh*Sh'*Uh')/(s'*Hk*s) + (Uy*Sy*Sy'*Uy')/(s'*y);
        Hk = nearestSPD(Hk);

        gradfxk = gradfxknew;
    end
    dxk = norm(x(:,k+1)-x(:,k))/max(eps,norm(x(:,k)));
    if strcmp(opt.Hessmethod, 'GN')
        Fxk = F(x(:,k+1));
        fxknew = Fxk'*Fxk;
    else
        fxknew = fun(x(:,k+1));
    end
    dfk = norm(fxknew-fxk)/max(eps,norm(fxk));
    fxk = fxknew;
    k = k+1;
end

x = x(:,1:k);

