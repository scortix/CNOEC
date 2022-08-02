function [a, e, i, Omega, w, theta] = rv2paraorb(rr,vv,mu)

%rv2paraorb Convert position-velocity parametrization to classical orbital
%   parameters
%
%   The function needs as input the position and the velocity vector of the
%   considered point, as well as the planetary gravitational constant mu
%   (for Earth use 398600)

r=norm(rr); % Norm of the position vector
v=norm(vv); % Norm of the velocity vector
vr=1/r*dot(rr,vv); % Radial Velocity
a=1/(2/r-v^2/mu); % Semimajor Axis
h=cross(rr,vv); % Specific relative angular momentum
i=acos(h(3)/norm(h)); % Inclination
N=[-h(2), h(1), 0]; % Node line vector
Omega=(acos(N(1)/norm(N)))*(N(2)>=0)+(2*pi-acos(N(1)/norm(N)))*(N(2)<0); % Line of the ascending node
ee=1/mu*((v^2-mu/r)*rr-r*vr*vv); % Eccentricity vector
e=norm(ee); % Eccentricity (Norm of the eccentricty vector)
w=acos(dot(N,ee)/(norm(N)*e))*(ee(3)>=0)+(2*pi-acos(dot(N,ee)/(norm(N)*e)))*(ee(3)<0); % Argument of periapsis
theta=mod(acos(dot(ee,rr)/(e*r))*(vr>=0)+(2*pi-acos(dot(ee,rr)/(e*r)))*(vr<0),2*pi); % True anomaly
end