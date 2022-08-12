function [rr, vv]= paraorb2rv(a, e, i, Omega, w, theta, mu)

%paraorb2rv Convert classical orbital parameters to position-velocity
%   parametrization
%
%   The function needs as input the 6 classical orbital parameters, as well
%   as the planetary gravitational constant mu (for Earth use 398600)

% Rotation Matrices
RO=[cos(Omega), sin(Omega), 0; -sin(Omega), cos(Omega), 0; 0, 0, 1];
Ri=[1 0 0; 0 cos(i) sin(i); 0 -sin(i) cos(i)];
Rw=[cos(w) sin(w) 0; -sin(w) cos(w) 0; 0 0 1];
TGEPF=Rw*Ri*RO;

% I and J versors in the new reference frame
p=TGEPF(1,:); q=TGEPF(2,:);

% Computation of position and velocity vectors
h=sqrt(mu*a*(1-e^2));
rr=h^2/mu*1/(1+e*cos(theta))*(cos(theta)*p+sin(theta)*q);
vv=mu/h*(-sin(theta)*p+(e+cos(theta))*q);
end