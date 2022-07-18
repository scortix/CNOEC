function [gradfx] = mygradcalc(fun, x, fx, method, eta, p)

dim = length(x);
if length(fx) ~= 1
    pf = eye(length(fx));
    J = zeros(length(fx),dim);
    for i = 1:length(fx)
        f = @(x) (fun(x)'*pf(:,i));
        if nargin == 4
            gradfx = mygradcalc(f, x, (fx'*pf(:,i))', method);
        else
            gradfx = mygradcalc(f, x, (fx'*pf(:,i))', method, eta);
        end
        J(i,:) = gradfx';
    end
    gradfx = J';
    return
end
if nargin < 6
    p = eye(dim);
end
gradfx = zeros(dim,1);
for i = 1:dim
    p_i = p(:,i);
    switch method
        case 'FD'
            if nargin == 4
                eta = sqrt(eps(fx));
            end
            gradfx(i) = (fun(x+eta*p_i)-fx)/eta;
        case 'BD'
            if nargin == 4
                eta = sqrt(eps(fx));
            end
            gradfx(i) = (fx-fun(x-eta*p_i))/eta;
        case 'CD'
            if nargin == 4
                eta = eps(fx)^(1/3);
            end
            gradfx(i) = (fun(x+eta*p_i)-fun(x-eta*p_i))/2/eta;
        case 'IM'
            if nargin == 4
                eta = eps(fx)^(1/3);
            end
            gradfx(i) = imag(fun(x+eta*1i*p_i))/eta;
    end
end