function J = costFun(s,sf,csi,w,x0EOE,xfEOE,f0,t0,dt_lim,L_lim,alpha)
Re = 6378.1; mu = 398600;
x0IOE = EOE2IOE(x0EOE,0,Re);

indMax = find(s<=sf,1,"last");

x = zeros(6,indMax);
f = zeros(indMax,1);
f(1) = f0;
t = zeros(indMax,1);
t(1) = t0;
x(:,1) = x0IOE;

C = [eye(5); zeros(1,5)];

for k = 1:indMax-1
    q = w(:,k)/norm(w(:,k));
    [xdot, tdot] = IOEDerivatives(s(k),x(:,k),csi(k)*q,Re,mu);
    ds = s(k+1)-s(k);
    x(:,k+1) = x(:,k) + ds*xdot';
    f(k+1) = f(k)-ds*tdot*csi(k);
    t(k+1) = t(k)+ds*tdot;
end
dt = t(end)-t(1);
df = f(1)-f(end);

g = C*x(1:5,end)-EOE2IOE(xfEOE,sf,Re);
g = g(1:5);
h = [x(6,end)+sf-L_lim(1);
    -x(6,end)-sf+L_lim(2);
    dt-dt_lim(1);
    -dt+dt_lim(2);
    -vecnorm(w)'.^2+1];

F = [sqrt((1-alpha)*dt); sqrt(alpha*df)];

J = [F'*F;g;h;F];

