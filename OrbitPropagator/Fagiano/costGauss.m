function J = costGauss(tmax,Ts,y0,u,ybar,umax,theta0,ratio)

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
x0 = EOE2COE(y0);
x0(6) = theta0;
y0 = COE2EOE(x0);
% y0(6) = y0(6)+theta0;
y = zeros(6,length(t)+1); % Initialization of vector state
y(:,1) = y0; % Set initial conditions
% J = 0; % Initialization of cost function

%% Weights Definition
% dyinv = abs(y0-ybar);
% for i = 1:length(dyinv)
%     dyinv(i) = (dyinv(i) ~= 0)/(dyinv(i)+(dyinv(i)==0));
% end
% Q = diag([1 1 1 1 1 0]'.*dyinv.^2);
% R = diag([1 1 1]/umax^2)*0.1;
% F = zeros(9*length(u)+6,1); 
%% Cost Function Calculation
for k = 1:length(t)
    ku = ceil(k/ratio);
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u(:,ku),398600);
%     J = J + u(:,k)'*R*u(:,k) + (y(:,k+1)-ybar)'*Q*(y(:,k+1)-ybar)*(k/10);
% if k == ratio*ku
%     F(9*(ku-1)+1:9*ku) = [sqrt(R)*u(:,ku); sqrt(Q)*(y(:,k+1)-ybar)*sqrt(100*k/length(t))];
% end
end
% F = F/sqrt(size(u,2));
% F(9*length(u)+1:end) = 10^1*sqrt(Q)*(y(:,end)-ybar)*sqrt(100);
% J = J/size(u,2) + 1e3*length(t)/10*(y(:,end)-ybar)'*Q*(y(:,end)-ybar);
r = min((y(1,:)./(1+sqrt(y(2,:).^2+y(3,:).^2).*cos(y(6,:)-atan2(y(3,:),y(2,:)))))');
J = [tmax;y(1:5,end)-ybar(1:5);r-6378.1];
end