function [Ddrag_r, Ddrag_t] = drag(x)

rho = rho_selection(x);
S = 1;
Cd = 1;

a = x(1);
e = x(2);
i = x(3);
Omega = x(4);
w = x(5);
theta = x(6);

mu_earth = 398600;
[~,vv] = paraorb2rv(a,e,i,Omega,w,theta,mu_earth);

p = a*(1-e^2);
f = e*cos(w+Omega);
g = e*sin(w+Omega);
% h = cos(Omega)*tan(i/2);
% k = sin(Omega)*tan(i/2);
L = Omega+w+theta;

if p < 0
    p = -p;
end

v_mod = norm(vv);
v_r   = sqrt(mu_earth/p)*(f*sin(L)-g*cos(L));
v_t   = sqrt(mu_earth/p)*(1+f*cos(L)+g*sin(L));

Ddrag_r = -1/2*rho*S*Cd*v_mod*v_r;
Ddrag_t = -1/2*rho*S*Cd*v_mod*v_t;
end