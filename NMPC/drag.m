function Ddrag  = drag(rho,S,Cd,x)

%   DRAG returns a vector of perturbations in the spacecraft frame given
%   from the aerodynamical drag in kg*km/s^2 taking as input:
%       the air density rho [kg/m^3]
%       the surface S [m^2]
%       the drag coefficient Cd
%       the orbital elements in Classica Coordinate x


a = x(1);
e = x(2);
i = x(3);
Omega = x(4);
w = x(5);
theta = x(6);

w_earth = 7.2921e-5;
w_e = [0 0 w_earth]';
mu_earth = 398600;
[r,v] = paraorb2rv(a,e,i,Omega,w,theta,mu_earth);
r = r';
v = v';

Dconst = -S*Cd/2*rho;

ir = r/norm(r);
in = cross(r,v)/norm(cross(r,v));
it = cross(in,ir);
Q = [ir it in];
v_rel = Q'*(v-cross(w_e,r));

Ddrag = Dconst*v_rel.^2*1e3;
% 1000 is a scaling factor since the surface S is given in m^2, the
% relative velocity v_rel in km/s and the air density in kg/m^3

end