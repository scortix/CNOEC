function[DJ2r, DJ2t, DJ2n] = earthNonSphericity(x)

% x classical orbit vector
J2 = 0.001082;  % geopotential coefficient of earth's oblateness
mu_earth = 398600;    % [km^3*s^-3] standard gravitational parameter of earh (mu = G*M)
Re = 6371;      % [km] earth equatorial radius

a = x(1);
e = x(2);
i = x(3);
Omega = x(4);
w = x(5);
theta = x(6);

h = cos(Omega)*tan(i/2);
k = sin(Omega)*tan(i/2);
L = Omega+w+theta;

[rr,~] = paraorb2rv(a,e,i,Omega,w,theta,mu_earth);

r = norm(rr);

DJ2r = -(3*mu_earth*J2*Re^2)/(2*r^4)*(1-12*(h*sin(L)-k*cos(L)^2)/(1+h^2+k^2)^2);
DJ2t = -(12*mu_earth*J2*Re^2)/(r^4)*(h*sin(L)-k*cos(L))*(h*cos(L)+k*sin(L))/(1+h^2+k^2)^2;
DJ2n = -(6*mu_earth*J2*Re^2)/(r^4)*(1-h^2-k^2)*(h*sin(L)-k*cos(L))/(1+h^2+k^2)^2;
end