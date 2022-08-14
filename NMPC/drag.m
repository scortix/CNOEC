function Ddrag  = drag(rho,S,Cd,x)

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

Ddrag = Dconst*v_rel.^2;

end