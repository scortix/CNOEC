function [Ddrag_r, Ddrag_t] = drag(rho,S,Cd,a,e,i,Omega,w,theta)

mu_earth = 398600;
[~,vv] = paraorb2rv(a,e,i,Omega,w,theta,mu_earth);

p = a*(1-e^2);
f = e*cos(w+Omega);
g = e*sin(w+Omega);
% h = cos(Omega)*tan(i/2);
% k = sin(Omega)*tan(i/2);
L = Omega+w+theta;


v_mod = sqrt(vv(1)^2+vv(2)^2+vv(3)^2);
v_r   = sqrt(mu_earth/p)*(f*sin(L)-g*cos(L));
v_t   = sqrt(mu_earth/p)*(1+f*cos(L)+g*sin(L));

Ddrag_r = -1/2*rho*S*Cd*v_mod*v_r;
Ddrag_t = -1/2*rho*S*Cd*v_mod*v_t;
end