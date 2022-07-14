function J = cost(tmax,Ts,y0,u,ybar,umax,theta0)

%COST Function calculates the cost of the orbital maneuvre considering
%   arbitrary defined weigthed sums. The cost takes into account both the
%   state error and the input magnitude. In addition, an hard constraint on
%   the maximum value of the input has been considered.
%   As inputs, the function needs:
%       tmax: final instant of the maneuvre
%       Ts: time step of the discrete system
%       y0: initial condition vector
%       u: input vector
%       ybar: desired state vector
%       umax: maximum value for inputs

t = 0:Ts:tmax; % Time vector
y0(6) = y0(6)+theta0;
y = zeros(6,length(t)+1); % Initialization of vector state
y(:,1) = y0; % Set initial conditions
J = 0; % Initialization of cost function

%% Weights Definition
dyinv = abs(y0-ybar);
for i = 1:length(dyinv)
    dyinv(i) = (dyinv(i) ~= 0)/(dyinv(i)+(dyinv(i)==0));
end
Q = diag([1 1 1 1 1 0]'.*dyinv.^2);
R = diag([1 1 1]/umax^2);

%% Cost Function Calculation
for k = 1:length(t)
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u(:,k),398600);
    J = J + 0*u(:,k)'*R*u(:,k) + (y(:,k+1)-ybar)'*Q*(y(:,k+1)-ybar);
end
J = J/size(u,2) + 100*(y(:,end)-ybar)'*Q*(y(:,end)-ybar);
end