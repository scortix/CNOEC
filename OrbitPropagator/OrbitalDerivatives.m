function xdot = OrbitalDerivatives(t, x, u, mu)

% x = [a e i om OM M]'
% u = [ar atheta ah]'
t
a = x(1);
e = x(2);
i = x(3);
om = x(4);
OM = x(5);
M = x(6);
ar = u(1);
atheta = u(2);
ah = u(3);

if e >= 0.9
    ar = 0;
end

opt = optimset('Display', 'none');
E = fzero(@(E) E-e*sin(E)-M, pi/4, opt);

ctheta = (e-cos(E))/(e*cos(E)-1);
r = a*(1-e^2)/(1+e*ctheta);
n = sqrt(mu/a^3);
h = sqrt(mu*a*(1-e^2));

theta = atan2(sin(E)/r*a*sqrt(1-e^2), ctheta);

adot = 2*a^2/h*(e*sin(theta)*ar+(1+e*cos(theta))*atheta);
edot = h/mu*(sin(theta)*ar+((e+cos(theta))/(1+e*cos(theta))+cos(theta))*atheta);
idot = r*cos(theta+om)*ah/h;
omdot = h/e/mu*((2+e*cos(theta))/(1+e*cos(theta))*sin(theta)*atheta-ar*cos(theta))-r*sin(theta+om)*ah/h/tan(i);
OMdot = r*sin(theta+om)*ah/h/sin(i);
Mdot = n-sqrt(1-e^2)*(2*r*ar/h+omdot+OMdot*cos(i));

xdot = [adot edot idot omdot OMdot Mdot]';
