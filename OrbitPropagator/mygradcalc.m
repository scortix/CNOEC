function [gradfx] = mygradcalc(fun, x, fx, method, eta, p)

dim = length(x);
J = zeros(length(fx),dim);
if nargin < 6
    p = eye(dim);
end
for i = 1:dim
    p_i = p(:,i);
    switch method
        case 'FD'
            if nargin == 4
                eta = sqrt(eps);
            end
            J(:,i) = (fun(x+eta*p_i)-fx)/eta;
        case 'BD'
            if nargin == 4
                eta = sqrt(eps);
            end
            J(:,i) = (fx-fun(x-eta*p_i))/eta;
        case 'CD'
            if nargin == 4
                eta = eps^(1/3);
            end
            J(:,i) = (fun(x+eta*p_i)-fun(x-eta*p_i))/2/eta;
        case 'IM'
            if nargin == 4
                eta = eps^(1/3);
            end
            J(:,i) = imag(fun(x+eta*1i*p_i))/eta;
    end
end
gradfx = J';
