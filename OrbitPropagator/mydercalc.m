function [gradfx] = mydercalc(fun, x, fx, pk, method, eta)

dim = length(x);
if length(fx) ~= 1
    pf = eye(length(fx));
    J = zeros(length(fx),dim);
    for i = 1:length(fx)
        f = @(x) (fun(x)'*pf(:,i))';
        if nargin == 4
            gradfx = mydercalc(f, x, (fx'*pf(:,i))', pk, method);
        else
            gradfx = mydercalc(f, x, (fx'*pf(:,i))', pk, method, eta);
        end
        J(i,:) = gradfx';
    end
    gradfx = J;
    return
end
p = eye(dim);
gradfx = zeros(dim,1);
switch method
    case 'FD'
        if nargin == 4
            eta = sqrt(eps(fx));
        end
        gradfx(i) = (fun(x+eta*pk)-fx)/eta;
    case 'BD'
        if nargin == 4
            eta = sqrt(eps(fx));
        end
        gradfx(i) = (fx-fun(x-eta*pk))/eta;
    case 'CD'
        if nargin == 4
            eta = eps(fx)^(1/3);
        end
        gradfx(i) = (fun(x+eta*pk)-fun(x-eta*pk))/2/eta;
    case 'IM'
        if nargin == 4
            eta = eps(fx)^(1/3);
        end
        gradfx(i) = imag(fun(x+eta*1i*pk))/eta;
end
