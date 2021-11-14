function [y] = COE2EOE(x)

a = x(1);
e = x(2);
i = x(3);
om = x(4);
OM = x(5);
theta = x(6);

p = a*(1-e^2);
f = e*cos(om+OM);
g = e*sin(om+OM);
h = cos(OM)*tan(i/2);
k = sin(OM)*tan(i/2);
L = OM+om+theta;

y = [p, f, g, h, k, L]';