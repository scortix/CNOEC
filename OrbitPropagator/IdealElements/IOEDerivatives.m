function [IOEdot] = IOEDerivatives(s, IOE, u, Re, mu)

% u = [ur ut un]

rho = IOE(1);
ex = IOE(2);
ey = IOE(3);
hx = IOE(4);
hy = IOE(5);
% sigma = IOE(6);

kc = 1+ex*cos(s)+ey*sin(s);
ks = ex*sin(s)-ey*cos(s);
kx = 0.5*(1+hx^2-hy^2);
ky = 0.5*(1-hx^2+hy^2);

coeff = sqrt(Re*rho/mu)/kc;

IOEdot(1) = coeff*2*rho*u(2);
IOEdot(2:3) = coeff*[kc*sin(s) 2*kc*cos(s)+ks*sin(s); -kc*cos(s) 2*kc*sin(s)-ks*cos(s)]*u(1:2);
IOEdot(4:5) = coeff*u(3)*[hx*hy*sin(s)+kx*cos(s); hx*hy*cos(s)+ky*sin(s)];
IOEdot(6) = coeff*(hx*sin(s)-hy*cos(s))*u(3);