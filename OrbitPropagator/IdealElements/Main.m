close all
clear
clc

myoptimset;

%%
x0 = [11359.07 0.7306 0 0.2539676 0 0]';
xf = [42165 0 0 0 0 0]';
t0 = 0;
t_lim = [1e4 3e6];
L_lim = [0 1e6];
sf = 10*pi;
s = (0:1:20)*pi; s = s';
weta = ones(3*length(s),1)/sqrt(3);
csi = zeros(length(s),1)+1e-5;
z = [sf;weta;csi];

fun = @(z) costFun(s,z(1),z(3*length(s)+2:end),reshape(z(2:3*length(s)+1),3,length(s)), x0, xf, 100, t0, t_lim, L_lim, 0.5);
C = [zeros(2*length(s),3*length(s)+1) [eye(length(s)); -eye(length(s))]];
d = [zeros(length(s),1); -ones(length(s),1)];

p = 5;
q = 4;
fx0 = fun(z);
f = @(x) fun(x)'*[1; zeros(length(fx0)-1,1)];
g = @(x) [zeros(1,p); eye(p); zeros(length(fx0)-1-p,p)]'*fun(x);
h = @(x) [zeros(1+p,q); eye(q); zeros(length(fx0)-1-p-q,q)]'*fun(x);
gs = @(x) g(x);
hs = @(x) h(x);

load("init1.mat")
opt2 = optimoptions("fmincon","Display","iter-detailed","MaxFunctionEvaluations",1e5);
optRes = z;
optRes = fmincon(f,optRes,-C,d,[],[],[],[],@(x) nlcon(x,gs,hs),opt2);
save("init1.mat","optRes")
%%
opt.method = 'Steepest';
optRes2 = mySQP(fun, optRes, [], [], C, d, 5, 4+0*length(s), opt);
%%
function [C, Ceq] = nlcon(x,gs,hs)
Ceq = gs(x);
C = -hs(x);
end
