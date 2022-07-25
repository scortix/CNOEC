function J = NMPC_cost(M,Ts,x,y0,yref,Q,R,E,coeffT,m0)

%COST Function calculates the cost of the orbital maneuvre considering
%   arbitrary defined weigthed sums. The cost takes into account both the
%   state error and the input magnitude. In addition, an hard constraint on
%   the maximum value of the input has been considered.
%   As inputs, the function needs:
%       M: prediction horizon
%       Ts: time step of the discrete system
%       y0: initial condition vector
%       u0: input vector from trajectory
%       ybar: desired state vector
%       umax: maximum value for inputs
%       x: optimization variables 3*M inputs,  6*M states (current state given), 6*M slack
%       variables in this order
%       Q: state trajectory weights 6x6
%       R: input trajectory weights 3x3
%       E: slack variables weights  6x6 (xi for slack variables)

% t = 0:Ts:Ts*M; % Time vector

yhat = zeros(6,M+1); % Initialization of state vectors
yhat(:,1) = y0; % Set initial conditions
u = zeros(3,M); % Initialization of input vectors
xi = zeros(6,M); % Initialization of slack variables
g = zeros(6*M,1); % Initialization of equality constraints vector
hu = zeros(1,M); % Initialization of fuel consumption constraint
m = zeros(1,M); m(1) = m0; % Initialization of mass

for k = 1:M
    u(:,k) = x(3*(k-1)+1:3*k);
    yhat(:,k+1) = x(3*M+6*(k-1)+1:3*M+6*k);
    xi(:,k) = x(9*M+6*(k-1)+1:9*M+6*k);
end

F = zeros(15*M,1); 
%% Cost Function Calculation
for k = 1:M
    F(3*(k-1)+1:3*k) = sqrt(R)*u(:,k);
    F(3*M+6*(M-1)+1:3*M+6*k) = sqrt(Q)*(yref(:,k)-yhat(:,k+1));
    F(9*M+6*(M-1)+1:9*M+6*k) = sqrt(E)*xi(:,k);
    g(6*(k-1)+1:6*k) = yhat(:,k)+Ts*EOEDerivatives(0,yhat(:,k),u(:,k),398600)-yhat(:,k+1)+xi(:,k);
    hu(k) = sqrt(u(1,k)^2+u(2,k)^2+u(3,k)^2)*1e3*m(k);
    if k < M
        m(k+1) = m(k) - Ts*hu(k)/m(k)/1e3;
end

r = min((yhat(1,:)./(1+sqrt(yhat(2,:).^2+yhat(3,:).^2).*cos(yhat(6,:)-atan2(yhat(3,:),yhat(2,:)))))');
J = [F'*F;g;[r-6378.1 coeffT-hu]';F];
end