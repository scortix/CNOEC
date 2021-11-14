function xdot = OrbitalDerivatives(t, x, u, mu, opt)

% Suport for hyperbolic and parabolic orbits must be added

% x = [a e i om OM M]'
% u = [ar atheta ah]'
a = x(1);
e = x(2);
i = x(3);
om = x(4);
OM = x(5);
M = x(6);
ar = u(1);
atheta = u(2);
ah = u(3);

% if e >= 0.99
%     e = 0.99;
% end
% if e <= 0
%     e = 0;
% end

if e < 1
%     if isinf(M)
%         xdot = [0 0 0 0 0 0]';
%         return
%     end
    if M > pi && M <= 2*pi
        M = 2*pi-M;
        x(6) = M;
    end
    E = fzero(@(E) E-e*sin(E)-M, pi/4, opt);

    ctheta = (e-cos(E))/(e*cos(E)-1);
    stheta = sqrt(1-e^2)*sin(E)/(1-e*cos(E));
    r = a*(1-e*cos(E));
    n = sqrt(mu/a^3);
    p = a*(1-e^2);    
    theta = atan2(stheta, ctheta);
elseif e >= 1
    if M > pi && M <= 2*pi
        M = 2*pi-M;
        x(6) = M;
    end
    e
    M
    F = fzero(@(F) -F-e*sinh(F)-M, pi/4, opt);

    ctheta = (e-cosh(F))/(e*cosh(F)-1);
    stheta = sqrt(e^2-1)*sinh(F)/(e*cosh(F)-1);
    r = a*(1-e*cosh(F));
    n = sqrt(abs(mu/a^3));
    p = abs(a*(e^2-1));
    theta = atan2(stheta, ctheta);
end
% else
%     xdot = [0 0 0 0 0 0]';
%     return
% %     H = fzero(@(H) e*sinh(H)-H-M, pi/4, opt)
% %     n = sqrt(mu/a^3);
% %     error('e')
% end
h = sqrt(mu*p);

adot = 2*a^2/h*(e*sin(theta)*ar+(1+e*cos(theta))*atheta);
edot = h/mu*(sin(theta)*ar+((e+cos(theta))/(1+e*cos(theta))+cos(theta))*atheta);
idot = r*cos(theta+om)*ah/h;
omdot = h/e/mu*((2+e*cos(theta))/(1+e*cos(theta))*sin(theta)*atheta-ar*cos(theta))-r*sin(theta+om)*ah/h/tan(i);
OMdot = r*sin(theta+om)*ah/h/sin(i);
Mdot = n-sqrt(abs(1-e^2))*(2*r*ar/h+omdot+OMdot*cos(i));

xdot = [adot edot idot omdot OMdot Mdot]';
