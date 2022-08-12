function [t, xkp1, fxkp1, niter] = mymeritlinesearch(fun, fxk, DT1k, xk, pk, tkmax, beta, c, nitermax)
% MYMERITLINESEARCH Computes the value of decision variables xkp1 at iteration k+1
% by carrying out a back-tracking line search approach, trying to achieve a
% sufficient decrease of the merit function T1(xk+tk*pk) where pk is the
% search direction.
%
%   INPUTS:
%           fun         =   merit function
%           fxk         =   merit function evaluated at xk
%           DT1k        =   directional derivative of the merit function
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
%           tk          =   step length
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

% Algorithm with for loop
for niter = 0:nitermax
    xkp1 = xk+t*pk;
    fxkp1 = fun(xkp1);
    if fxkp1 <= fxk + t*c*DT1k
        break
    end
    t = beta*t;
end
