function [t, xkp1, fxkp1, niter] = mymeritlinesearch(fun, fxk, gradfxk, xk, pk, tkmax, beta, c, nitermax)

t = tkmax;

% Algortihm with while loop (original)
% niter = 0;
% 
% while fun(xk+pk*tk) > fxk + t*c*gradfxk'*pk && niter < nitermax
%     t = beta*t;
%     niter = niter+1;
% end

for niter = 1:nitermax
    xkp1 = xk+t*pk;
    fxkp1 = fun(xkp1);
    if fxkp1 <= fxk + t*c*gradfxk
        break
    end
    t = beta*t;
end
if niter == nitermax
    warning('Iteration limit')
end
