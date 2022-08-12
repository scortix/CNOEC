function [xkp1, fxkp1, niter] = mylinesearch(fun, fxk, gradfxk, xk, pk, tkmax, beta, c, nitermax)
% MYLINESEARCH Computes the value of decision variables xkp1 at iteration k+1
% by carrying out a back-tracking line search approach, trying to achieve a
% sufficient decrease of the cost function f(xk+tk*pk) where pk is the
% search direction. pk must be locally a descent direction (i.e. gradfxk'*pk<0).
%
%   INPUTS:
%           fun         =   cost function
%           fxk         =   cost function evaluated at xk
%           gradfxk     =   gradient of the cost function with respect to
%                           x, evaluated at xk
%           xk          =   value of the decision variables at the current
%                           iterate
%           pk          =   search direction
%           tkmax       =   maximum step size
%           beta        =   ratio tk_ip1/tk_i during the back-tracking line
%                           search (beta in (0,1))
%           c           =   ratio between acheived decrease and decrease
%                           predicted by the first-order Taylor expansion,
%                           sufficient to exit the back-tracking line
%                           search algorithm
%           nitermax    =   maximum number of iterations
%
%   OUTPUTS:
%           xkp1        =   obtained value of xk+tk*pk
%           fxkp1       =   cost function evaluated at xkp1
%           niter       =   number of iterations employed to satisfy Armijo
%                           condition

t = tkmax;

% Algortihm with while loop (original)
% niter = 0;
% 
% while fun(xk+pk*tk) > fxk + t*c*gradfxk'*pk && niter < nitermax
%     t = beta*t;
%     niter = niter+1;
% end

for niter = 0:nitermax
    xkp1 = xk+t*pk;
    fxkp1 = fun(xkp1);
    if fxkp1 <= fxk + t*c*gradfxk'*pk
        break
    end
    t = beta*t;
end
