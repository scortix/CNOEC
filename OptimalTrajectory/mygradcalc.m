function [gradfx] = mygradcalc(fun, x, fx, opt, eta, p)

dim = length(x);
J = zeros(length(fx),dim);
if nargin < 6
    p = eye(dim);
end
method = opt.gradmethod;
useParallel = opt.useParallel;
switch method
    case 'FD'
        if nargin == 4
            eta = sqrt(eps);
        end
    case 'BD'
        if nargin == 4
            eta = sqrt(eps);
        end
    case 'CD'
        if nargin == 4
            eta = eps^(1/3);
        end
    case 'IM'
        if nargin == 4
            eta = eps^(1/3);
        end
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
