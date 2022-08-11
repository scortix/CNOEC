function [xstar, fxstar, k, exitflag, x] = myfminunc(fun, x0, opt, grad, hess)

dxk = 1; dfk = 1;
Hk = eye(length(x0));
x = zeros(length(x0), opt.nitermax);
x(:,1) = x0;
k = 1;
fprintf('|  Iteration   |      Fx       | ||grad(Fx)||  |  Step Length  |  F-Variation  |\r')
fprintf('|--------------|---------------|---------------|---------------|---------------|\r')

if strcmp(opt.method, 'Gauss-Newton')
    F = fun;
    fun = @(x) F(x)'*F(x);
    Fxk = F(x0);
end
fxk = fun(x0);

while true
    if (~strcmp(opt.method, 'BFGS') || k == 1) && ~strcmp(opt.method, 'Gauss-Newton') && ~strcmp(opt.method, 'Newton')
        gradfxk = mygradcalc(fun, x(:,k), fxk, opt.gradmethod);
    elseif strcmp(opt.method, 'Gauss-Newton')
        gradFxk = mygradcalc(F, x(:,k), Fxk, opt.gradmethod);
        gradfxk = 2*gradFxk'*Fxk;
    elseif strcmp(opt.method, 'Newton')
        gradfxk = grad(x(:,k));
        hessfxk = hess(x(:,k));
    end

    if k >= 1000
        niterStr = "|\t\t%d   ";
    else
        niterStr = "|\t\t%d\t   ";
    end
    if fxk < 0
        fprintf(strcat(niterStr,"| %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |\n"),...
            k, fxk,norm(gradfxk),dx(k),df(k));
    else
        fprintf(strcat(niterStr,"|  %6.5e  |  %6.5e  |  %6.5e  |  %6.5e  |\n"),...
            k, fxk,norm(gradfxk),dxk,dfk);
    end

    switch opt.method
        case 'Steepest Descent'
            pk = -gradfxk;
        case 'Gauss-Newton'
%             pk = -(2*(gradFxk'*gradFxk))\(2*gradFxk'*Fxk);
            pk = -gradFxk\Fxk;
        case 'BFGS'
            pk = -Hk\gradfxk;
        case 'Newton'
            pk = -hessfxk\gradfxk;
    end
    if norm(gradfxk'*pk) <= opt.tolgrad || dxk <= opt.tolx || dfk <= opt.tolf || k >= opt.nitermax
        xstar = x(:,k);
        fxstar = fxk;
        exitflag = 1;
        break
    end
    
    [x(:,k+1), ~, ~] = mylinesearch(fun, fxk, gradfxk, x(:,k), pk, opt.lstkmax, opt.lsbeta, opt.lsc, opt.lsnitermax);

    if strcmp(opt.method, 'BFGS')
        gradfxknew = mygradcalc(fun, x(:,k+1), fun(x(:,k+1)), opt.gradmethod);
        y = gradfxknew-gradfxk;
        s = x(:,k+1)-x(:,k);
        if y'*s <= opt.gamma*s'*Hk*s
            y = y + (opt.gamma*s'*Hk*s-s'*y)/(s'*Hk*s-s'*y)*(Hk*s-y);
        end
        Hk = Hk - (Hk*(s*s')*Hk)/(s'*Hk*s) + (y*y')/(s'*y);
        gradfxk = gradfxknew;
    end
    dxk = norm(x(:,k+1)-x(:,k))/max(eps,norm(x(:,k)));
    if strcmp(opt.method, 'Gauss-Newton')
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

