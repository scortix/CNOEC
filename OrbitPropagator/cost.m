function J = cost(tmax,Ts,y0,u,ybar)
t = 0:Ts:tmax;
y = zeros(6,length(t)+1); % Initialization of vector state
y(:,1) = y0; % Set initial conditions
J = 0; % Initialization of cost function
umax = 1e-3; % Definition of maximum acceleration

%% Weights Definition
dyinv = abs(y0-ybar); for i = 1:length(dyinv); dyinv(i) = (dyinv(i) ~= 0)/(dyinv(i)+(dyinv(i)==0)); end
Q = diag([1 1 1 1 1 0]'.*dyinv.^2);
R = diag([1 1 1]/umax^2);

%% Cost Function Calculation
for k = 1:length(t)
    usat = min(umax, max(-umax, u(:,k)));
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),usat,398600);
    J = J + u(:,k)'*R*u(:,k) + (y(:,k+1)-ybar)'*Q*(y(:,k+1)-ybar);
end
J = J + 1e6*(y(:,end)-ybar)'*Q*(y(:,end)-ybar);
end