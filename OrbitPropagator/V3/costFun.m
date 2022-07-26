function [J,y,tCost,m] = costFun(x, Ts, tmax, y0, ybar, ratio, Tmax, coeffT, m0, alpha)

lu = (length(x)-2)/2;
theta0 = x(1);
epsilon = x(end);
csi = x(2:lu+1);
qAngle = x(lu+2:end-1);

topt = 0:Ts*ratio:tmax;

t = 0:Ts:tmax;

csi = interp1(topt,csi,t,"pchip");
qAngle = interp1(topt,qAngle,t,"pchip");

y0(6) = y0(6)+theta0;
x0 = EOE2COE(y0);
xbar = EOE2COE(ybar);
Qdiag = (xbar([1:2 5])-0*x0([1:2 5]));
Qdiag = Qdiag + 0.1*(Qdiag==0);
Q = diag(1./Qdiag.^2);

y = zeros(6,length(t));
y(:,1) = y0;
m = m0;
tCost = 0;
for k = 1:length(t)-1
    qdir = [sin(qAngle(k)) cos(qAngle(k)) 0];
    u = Tmax/m*csi(k)*qdir/1e3;

    y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u,398600);
    xCOE = EOE2COE(y(:,k));
    m = m - Ts*coeffT*csi(k);
%     f = f+(xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2 5]))*t(k);
    tCost = tCost+(xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2 5]))*t(k);
end
tCost = tCost/length(t)/tmax*1e3;

xCOE = EOE2COE(y(:,end));
r = ((y(1,:)./(1+sqrt(y(2,:).^2+y(3,:).^2).*cos(y(6,:)-atan2(y(3,:),y(2,:)))))');
g = (xCOE([1:2 5])-xbar([1:2 5]))'*Q*(xCOE([1:2 5])-xbar([1:2 5]));
f = alpha*tCost+(1-alpha)*((m0-m)*10)+1e5*g;
% g = [];
h = [m-500;r-6380];
% h = m-500;


J = [f;h];


