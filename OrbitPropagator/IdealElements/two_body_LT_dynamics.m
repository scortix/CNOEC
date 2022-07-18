function dX = two_body_LT_dynamics(t,X,g0,Isp,Mu,Tmax)
% 
% The function write the differential equations of a time optimal state and
% costate dynamics with a low thrust propulsion device.
%
% INPUT:
% t = Time.
% x = State and costate vector [14,1].
% g0 = Earth surface gravity acceleration.
% Isp = Specific impulse.
% Mu = Planetary constant.
% Tmax = Maximum available thrust.
%
% OUTPUT:
% dX = State and costate derivatives.
%

r = @(X) norm(X(1:3)); 

dX = [X(4);
    X(5);
    X(6);
    -Mu*X(1)/r(X)^3-(Tmax/X(7).*X(11)/norm(X(11:13)));
    -Mu*X(2)/r(X)^3-(Tmax/X(7).*X(12)/norm(X(11:13)));
    -Mu*X(3)/r(X)^3-(Tmax/X(7).*X(13)/norm(X(11:13)));
    -Tmax/Isp/g0;
    -3*Mu/r(X)^5*dot(X(1:3),X(11:13)).*X(1) + Mu/r(X)^3.*X(11);
    -3*Mu/r(X)^5*dot(X(1:3),X(11:13)).*X(2) + Mu/r(X)^3.*X(12);
    -3*Mu/r(X)^5*dot(X(1:3),X(11:13)).*X(3) + Mu/r(X)^3.*X(13);
    -X(8);
    -X(9);
    -X(10);
    -norm(X(11:13))*Tmax/X(7)^2];

end