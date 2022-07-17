close all
clear
clc

myoptimset;

%%
x0 = [11359.07 0.7306 0 0.2539676 0 0]';
xf = [42165 0 0 0 0 0]';
t0 = 0;
t_lim = [1e5 3e6];
L_lim = [0 Inf];
sf = 10*pi;
s = (0:0.1:20)*pi; s = s';
weta = ones(4*length(s),1)/sqrt(3);
z = [sf;weta];

optFun = @(z) costFun(s,z(1),z(3*length(s)+2:end),reshape(z(2:3*length(s)+1),3,length(s)), x0, xf, 100, t0, t_lim, L_lim, 0.5);
C = [zeros(2*length(s),3*length(s)+1) [eye(length(s)); -eye(length(s))]];
d = [zeros(length(s),1); ones(length(s),1)];
optRes = mySQP(optFun, z, [], [], C, d, 5, 4+length(s), opt);