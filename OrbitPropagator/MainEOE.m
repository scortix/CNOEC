close all
clear all
clc

% Forward Euler: x(k+1) = x(k) + Ts*xdot(k)
Ts = 100;
t = 0:Ts:1e5;
y = zeros(6,length(t));
u = zeros(3,length(t));
u(1,:) = 1e-4;
y0 = COE2EOE([1e4 0.2 pi/4 pi/2 pi/3 0]');
y(:,1) = y0;

% for k = 1:length(t)-1
%     k
%     y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u(:,k),398600);
% end
% plotEOE(y');
%%
uold = u;
ybar = COE2EOE([1.1e4; 0.25; pi/4; 0; pi/3; 1]);

dy = abs(ybar-y0);
% Weight sum of states
% Jx = dx'*Q*dx
% Consider x = x(1:5) cause the last state is continuosly changing and
% much less important than other five
% dx = (x-xbar)./(dy) where dy is used as a normalization factor
% Q = coef*diag([1 1 1 1 1])
%%

options = optimoptions(@fminunc,'Display','iter', 'MaxFunctionEvaluation', 5e5,...
    'StepTolerance', 1e-10, 'UseParallel', false, 'MaxIterations', 40, 'OptimalityTolerance', 1e-8);
[u, fval, ~, out] = fminunc(@(x) cost(t,Ts,y0,[x],ybar), u, options);
%u = [u; uold(3,:)];
%%
for k = 1:length(t)
    
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u(:,k),398600);
end
plotEOE(y');
x = y;
for k = 1:size(y,2)
    x(:,k) = EOE2COE(y(:,k));
end


function J = cost(t,Ts,y0,u,ybar)
y = zeros(6,length(t));
y(:,1) = y0;
J = 0;
umax = 1e-3;

dy = abs(y0-ybar);
dyinv = dy;
for i = 1:length(dyinv)
    if dy(i) == 0
        dyinv(i) = 0;
    else
        dyinv(i) = 1/dy(i);
    end
end
Q = diag([1 1 1 1 1 0]'.*dyinv.^2);
R = diag([1 1 1]/umax^2);
for k = 1:length(t)
    if abs(u(1,k)) > umax
        a = umax*sign(u(1,k));
    else
        a = u(1,k);
    end
    if abs(u(2,k)) > umax
        b = umax*sign(u(2,k));
    else
        b = u(2,k);
    end
    if abs(u(3,k)) > umax
        c = umax*sign(u(3,k));
    else
        c = u(2,k);
    end
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),[a; b; c],398600);
    
    J = J + u(:,k)'*R*u(:,k) + (y(:,k+1)-ybar)'*Q*(y(:,k+1)-ybar);
    %x = EOE2COE(y(:,k));
    %J = J + 0.1*(u(1,k)*1e4)^2 + 0.1*(u(2,k)*1e5)^2 + 10*((x(1)-1.1e4)/1e4)^2 + ((x(2)-0.25)/0.2)^2;
end
J = J + 1e6*(y(:,k+1)-ybar)'*Q*(y(:,k+1)-ybar);
%J = J + 1e6*((x(1)-1.1e4)/1e4)^2 + 1e5*((x(2)-0.25)/0.2)^2;
end