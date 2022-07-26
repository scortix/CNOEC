function [J,y,tCost,m] = costODE(x, Ts, tmax, y0, ybar, ratio, Tmax, coeffT, m0, alpha)

lu = (length(x)-2)/2;
theta0 = x(1);
epsilon = x(end);
csi = x(2:lu+1);
qAngle = x(lu+2:end-1);


topt = 0:Ts*ratio:tmax;

t = 0:Ts:tmax;
plot(topt,qAngle,t,interp1(topt,qAngle,t),t,interp1(topt,qAngle,t,"spline"))
% csi = interp1(topt,csi,t);
% qAngle = interp1(topt,qAngle,t);

y0(6) = y0(6)+theta0;
x0 = EOE2COE(y0);
xbar = EOE2COE(ybar);
Qdiag = (xbar([1:2 5])-0*x0([1:2 5]));
Qdiag = Qdiag + 0.1*(Qdiag==0);
Q = diag(1./Qdiag.^2);

qAngleInter = @(t) interp1(topt,qAngle,t,"spline");
um = @(t) Tmax/1e3*interp1(topt,csi,t,"spline").*[sin(qAngleInter(t)) cos(qAngleInter(t)) 0*qAngleInter(t)];
y = zeros(6,length(t));
y(:,1) = y0;
m = m0;
tCost = 0;
opt = odeset("MaxStep",Ts);
tic
[tODE,ym] = ode15s(@(t,y)[EOEDerivatives(t,y(1:6),um(t)/y(7),398600); -coeffT*interp1(topt,csi,t,"spline")], [0 tmax], [y0;m0]);

toc
tic
[tODE1,ym1] = ode23t(@(t,y)[EOEDerivatives(t,y(1:6),um(t)/y(7),398600); -coeffT*interp1(topt,csi,t)], [0 tmax], [y0;m0],opt);
toc
qAngleODE = interp1(topt,qAngle,tODE);
csiODE = interp1(topt,csi,tODE);
csi = interp1(topt,csi,t);
mm = m0;
qAngle = interp1(topt,qAngle,t);
tic
for k = 1:length(t)-1
    qdir = [sin(qAngle(k)) cos(qAngle(k)) 0];
    u = Tmax/m*csi(k)*qdir/1e3;

    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u,398600);
%     xCOE = EOE2COE(y(:,k));
    m = m - Ts*coeffT*csi(k);

%     f = f+(xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2 5]))*t(k);
%     tCost = tCost+(xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2 5]))*t(k);
end
toc
plot(tODE,ym(:,1),t,y(1,:),tODE1,ym1(:,1))

tCost = tCost/length(t)/tmax*1e3;

xCOE = EOE2COE(y(:,end));
g = (xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2 5]));
f = alpha*tCost+(1-alpha)*((m0-m)*10)+1e5*g;
% g = [];
h = m-500;


J = [f;h];


