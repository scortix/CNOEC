function gradfx = mygradcalc(fun, x, fx, opt)
% MYGRADCALC Computes the gradient (i.e. the Jacobian transpose) of a 
% given function, using one of several possible methods.
%   INPUTS:
%           fun         =   function whose gradient shall be evaluated (in
%                           general a vector of N functions)
%           x           =   value of the n-dimensional input argument at 
%                           which to evaluate
%                           the gradient (dfun(x)/dx)'
%           fx          =   vlaue of the function fun at the point x
%           opt         =   struct which must have at least two fields:
%               method      =   string indicating the differentiation method:
%                                   'FD' (Forward Finite Differences), 
%                                   'BD' (Backward Finite Differences), 
%                                   'CD' (Central Finite Differences), 
%                                   'IM' (Imaginary-part trick).
%               useParallel =   boolean indicating wether to use parallel
%                               pool to compute the gradient
%               graddx      =   perturbation step used (If not specified, a
%                               default value will be used)
%
%   OUTPUT:
%           gradient    =   n-by-N matrix containing in each column the
%                           partial derivatives of the corresponding element of function
%                           fun(x) with respect to each component of x,
%                           evaluated at xk

dim = length(x);
J = zeros(length(fx),dim);
p = eye(dim);
method = opt.gradmethod;
useParallel = opt.useParallel;
if ~isfield(opt,graddx)
    switch method
        case 'FD'
            eta = sqrt(eps);
        case 'BD'
            eta = sqrt(eps);
        case 'CD'
            eta = eps^(1/3);
        case 'IM'
            eta = 1e-100;
    end
else
    eta = opt.graddx;
end
if useParallel
    parfor i = 1:dim
        p_i = p(:,i);
        switch method
            case 'FD'
                J(:,i) = (fun(x+eta*p_i)-fx)/eta;
            case 'BD'
                J(:,i) = (fx-fun(x-eta*p_i))/eta;
            case 'CD'
                J(:,i) = (fun(x+eta*p_i)-fun(x-eta*p_i))/2/eta;
            case 'IM'
                J(:,i) = imag(fun(x+eta*1i*p_i))/eta;
        end
    end
else
    for i = 1:dim
        p_i = p(:,i);
        switch method
            case 'FD'
                J(:,i) = (fun(x+eta*p_i)-fx)/eta;
            case 'BD'
                J(:,i) = (fx-fun(x-eta*p_i))/eta;
            case 'CD'
                J(:,i) = (fun(x+eta*p_i)-fun(x-eta*p_i))/2/eta;
            case 'IM'
                J(:,i) = imag(fun(x+eta*1i*p_i))/eta;
        end
    end
end
gradfx = J';
