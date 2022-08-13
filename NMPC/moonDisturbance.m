function [Dmoon_r, Dmoon_t, Dmoon_n]  = moonDisturbance(x, time, xp, yp, zp)

a = x(1);
e = x(2);
i = x(3);
Omega = x(4);
w = x(5);
theta = x(6);

mu_earth = 398600;
Ts = 100;
[r,v] = paraorb2rv(a,e,i,Omega,w,theta,mu_earth);
r = r';
v = v';

k = floor(time/Ts)*Ts;

% the 4 following lines for approximated moon position (fast)
x_m = xp(1)+xp(4)*sin(xp(3)*k+xp(2));
y_m = yp(1)+yp(4)*sin(yp(3)*k+yp(2));
z_m = zp(1)+zp(4)*sin(zp(3)*k+zp(2));
s = [x_m; y_m; z_m];

% the 3 following line for real moon position (slow)
% s = zeros(3,1);
% coder.extrinsic("myMoonpos")
% s = myMoonpos(k);

% r position vector of the spacecraft
% time is the value representing the Julian day in TDT scale

mu_moon = 490487;               % moon standard gravitational coefficient

d = r-s;                            % vector from moon to spacecraft
d_mod = sqrt(d(1)^2+d(2)^2+d(3)^2); % modulus of d
q = r'*(r-2*s)/(s'*s);
F = @(q) q*(3+3*q+q^2)/(1+(1+q)^(3/2));

t = -mu_moon/d_mod^3*(r+F(q)*s);

ir = r/norm(r);
in = cross(r,v)/norm(cross(r,v));
it = cross(in,ir);

Q = [ir it in];

a_tb = Q*t;

Dmoon_r = a_tb(1);
Dmoon_t = a_tb(2);
Dmoon_n = a_tb(3);
end