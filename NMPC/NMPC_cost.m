function J = NMPC_cost(M,Ts,x,y0,yref,Q,R,coeffT,m0,Tmax)

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
%       x: optimization variables 3*M inputs,  6*M states (current state given)
%       variables in this order
%       Q: state trajectory weights 6x6
%       R: fuel consumption weight

% t = 0:Ts:Ts*M; % Time vector

yhat = zeros(6,M+1); % Initialization of state vectors
yhat(:,1) = y0; % Set initial conditions
u = zeros(3,M); % Initialization of input vectors
xi = zeros(1,M); % Initialization of fuel utilization
qAngle = zeros(1,M); % Initialization of qAngle
rAngle = zeros(1,M); % Initialization of rAngle
m = zeros(1,M); m(1) = m0; % Initialization of mass

for k = 1:M
    xi(1,k) = x(k,1);
    qAngle(1,k) = x(M+k,1);
    rAngle(1,k) = x(2*M+k,1);
end

F = zeros(7*M,1);
% Cost Function Calculation
for k = 1:M
    u(:,k) = Tmax/m(k)/1e3*xi(1,k)*[sin(qAngle(k))*cos(rAngle(k)) cos(qAngle(k))*cos(rAngle(k)) sin(rAngle(k))]';
    yhat(:,k+1) = yhat(:,k)+Ts*EOEDerivatives(0,yhat(:,k),u(:,k),398600);
    F(k,1) = sqrt(R)*xi(1,k);
    F(M+6*(k-1)+1:M+6*k,1) = sqrt(Q)*(yref(:,k)-yhat(:,k+1));
    if k < M
        m(k+1) = m(k) - Ts*xi(1,k)*coeffT;
    end
end

r = min((yhat(1,:)./(1+sqrt(yhat(2,:).^2+yhat(3,:).^2).*cos(yhat(6,:)-atan2(yhat(3,:),yhat(2,:)))))');
% minXi = min(xi);
% maxXi = max(xi);
J = [F'*F;r-6378.1;F];
end