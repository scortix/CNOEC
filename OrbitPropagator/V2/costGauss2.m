function J = costGauss2(tmax,Ts,y0,ybar,theta0,m0,coeffT,Tmax,csi,q,ratio,alpha)

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
y = zeros(6,length(t)+1); % Initialization of vector state
y(:,1) = y0; % Set initial conditions
m = m0;

%% Weights Definition
dyinv = abs(y0-ybar);
for i = 1:length(dyinv)
    dyinv(i) = (dyinv(i) ~= 0)/(dyinv(i)+(dyinv(i)==0));
end
Q = diag([1 1 1 1 1 0]'./ybar.^2);
% R = diag([1 1 1]/umax^2)*0.1;

%% Cost Function Calculation
for k = 1:length(t)
    ku = ceil(k/ratio);
    u = Tmax/m*csi(ku)*q(:,ku)/norm(q(:,ku));
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u,398600);
    m = m - Ts*coeffT*csi(ku);
end

r = min((y(1,:)./(1+sqrt(y(2,:).^2+y(3,:).^2).*cos(y(6,:)-atan2(y(3,:),y(2,:)))))');
J = [0;Q(1:5,1:5)*(y(1:5,end)-ybar(1:5)).^2;r-6378.1];
end