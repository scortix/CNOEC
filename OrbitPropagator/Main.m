% Main script for the optimization process of the orbital plane change.
% Needs to be revised.

close all
clear all
clc

opt_ode = odeset('MaxStep',200);
opt_fzero = optimset('Display', 'none');
[t,y] = ode45(@(t,x) OrbitalDerivatives(t,x,[1e-2 0 0]',398600, opt_fzero), [0 1e4], [1e4 0.2 pi/4 pi/2 pi/3 0]',opt_ode);
%%
[theta, E] = plotting(y);
return
%% Optimization Attempt
% Forward Euler: x(k+1) = x(k) + Ts*xdot(k)
Ts = 25;
t = 0:Ts:1e4;
y = zeros(6,length(t));
u = zeros(3,length(t));
u(1,:) = 1e-4;
y0 = [1e4 0.2 pi/4 pi/2 pi/3 0]';
y(:,1) = y0;

% for k = 1:length(t)-1
%     y(:,k+1) = y(:,k) + Ts*OrbitalDerivatives(t(k),y(:,k),u(:,k),398600, opt_fzero);
% end
% [theta, E] = plotting(y');

uold = u;
options = optimoptions(@fminunc,'Display','iter', 'MaxFunctionEvaluation', 5e5,...
    'StepTolerance', 1e-10, 'UseParallel', false, 'MaxIterations', 40, 'OptimalityTolerance', 1e-8);
[u, fval, ~, out] = fminunc(@(x) cost(t,Ts,y0,[x; uold(3,:)],opt_fzero), u(1:2,:), options);
u = [u; uold(3,:)];


y0 = [1e4 0.2 pi/4 pi/2 pi/3 0]';
y(:,1) = y0;

for k = 1:length(t)-1
    y(:,k+1) = y(:,k) + Ts*OrbitalDerivatives(t(k),y(:,k),u(:,k),398600, opt_fzero);
end
[theta, E] = plotting(y');

function J = cost(t,Ts,y0,u,opt_fzero)
y = zeros(6,length(t));
y(:,1) = y0;
J = 0;
umax = 5e-4;
for k = 1:length(t)-1
    if abs(u(1,k)) > umax
        a = umax*sign(u(1,k));
    else
        a = u(1,k);
    end
    if abs(u(2,k)) > 0.1*umax
        b = 0.1*umax*sign(u(2,k));
    else
        b = u(2,k);
    end
    y(:,k+1) = y(:,k) + Ts*OrbitalDerivatives_mex(t(k),y(:,k),[a; b; 0],398600, opt_fzero);
    J = J + 0.1*(u(1,k)*1e4)^2 + 0.1*(u(2,k)*1e5)^2 + 10*((y(1,k+1)-1.1e4)/1e4)^2 + ((y(2,k+1)-0.25)/0.2)^2;
end
J = J + 1e6*((y(1,k+1)-1.1e4)/1e4)^2 + 1e5*((y(2,k+1)-0.25)/0.2)^2;
end


