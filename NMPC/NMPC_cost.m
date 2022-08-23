function J = NMPC_cost(M,Ts,x,y0,yref,Q,R,coeffT,m0,Tmax)

%   NMPC_COST Function calculates the cost of the orbital maneuvre considering
%   arbitrary defined weigthed sums. The cost takes into account both the
%   state error and the input magnitude. In addition, an hard constraint on
%   the maximum value of the input has been considered.
%   As inputs, the function needs:
%       M:      prediction horizon
%       Ts:     time step of the discrete system
%       x:      optimization variables 3*M
%       y0:     initial condition vector (zEOE state)
%       yref:   desired state vector evolution (zEOE trajectory)
%       Q:      state trajectory weights 6x6
%       R:      fuel consumption weight
%       m0:     initial mass
%       Tmax:   maximum Thrust

% t = 0:Ts:Ts*M; % Time vector

yhat = zeros(6,M+1); % Initialization of state vectors
yhat(:,1) = y0; % Set initial conditions
u = zeros(3,M); % Initialization of input vectors
dir = zeros(3,M); % Initialization of direction vector
cons = zeros(M,1); % Initialization of consumption vector
m = zeros(1,M); m(1) = m0; % Initialization of mass

for k = 1:M
    dir(:,k) = x(3*(k-1)+1:3*k);
    cons(k) = norm(dir(:,k));
end

F = zeros(7*M,1);
% Cost Function Calculation
for k = 1:M
    u(:,k) = Tmax/m(k)/1e3*dir(:,k);
    yhat(:,k+1) = yhat(:,k)+Ts*EOEDerivatives(0,yhat(:,k),u(:,k),398600);
    F(k,1) = sqrt(R)*cons(k);
    F(M+6*(k-1)+1:M+6*k,1) = sqrt(Q)*(yref(:,k+1)-yhat(:,k+1));
    if k < M
        m(k+1) = m(k) - Ts*cons(k)*coeffT;
    end
end

r = min((yhat(1,:)./(1+sqrt(yhat(2,:).^2+yhat(3,:).^2).*cos(yhat(6,:)-atan2(yhat(3,:),yhat(2,:)))))');
J = [F'*F;[r-6378.1; 1-cons];F];
end