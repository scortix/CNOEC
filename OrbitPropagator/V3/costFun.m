function [J,y,tCost,m] = costFun(x, Ts, tmax, y0, ybar, ratio, Tmax, coeffT, m0, alpha)

lu = (length(x)-1)/2; % Length of the input vector
theta0 = x(1); % True anomaly at the beginning of the transfer
csi = x(2:lu+1); % Throttle
qAngle = x(lu+2:end); % Angle of the thrust vector

t = 0:Ts:tmax; % Time vector for the state variables
topt = 0:Ts*ratio:tmax; % Time vector for the optimization variables

% Interpolation using time vector t
% csi = interp1(topt,csi,t,"pchip");
% qAngle = interp1(topt,qAngle,t,"pchip");
coder.extrinsic("makima");
csi = (makima(topt,csi,t))';
qAngle = (makima(topt,qAngle,t))';

y0(6) = y0(6)+theta0; % Modify initial condition true longitude
x0 = EOE2COE(y0); % Initial condition in COE
xbar = EOE2COE(ybar); % Desired orbti in COE

% Weight matrix construction
Qdiag = (xbar([1:2 5])-x0([1:2 5]));
Qdiag = Qdiag + 0.1*(Qdiag==0);
Q = diag(1./Qdiag.^2);

% Intialization of variables
y = zeros(6,length(t));
y(:,1) = y0;
m = m0;
tCost = 0;

% Integration routine
for k = 1:length(t)-1
    qdir = [sin(qAngle(k)) cos(qAngle(k)) 0]; % Thrust direction
    u = Tmax/m*csi(k)*qdir/1e3; % Acceleration vector
    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u,398600); % State vector update    
    m = m - Ts*coeffT*csi(k); % Mass update
    xCOE = EOE2COE(y(:,k)); % State vector in COE
    tCost = tCost+(xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2 5]))*t(k); % Time cost update
end

% Cost calculation
tCost = tCost/length(t)/tmax; % Normalization of time cost

xCOE = EOE2COE(y(:,end)); % Final state in COE
FSE = (xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2 5])); % Final State Error Cost
f = alpha*tCost+(1-alpha)*(1-m/m0)+10*FSE; % Cost

% Constraints
g = []; % Equality constraints
r = ((y(1,:)./(1+sqrt(y(2,:).^2+y(3,:).^2).*cos(y(6,:)-atan2(y(3,:),y(2,:)))))'); % Point-Earth distance
h = [m-400;r-6380]; % Inequality constraints

% Output construction
J = [f; g; h];


