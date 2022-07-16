function J = cost(s,sf,csi,udir,x0EOE,f0,t0,alpha)
Re = 6378.1; mu = 398600;
x0IOE = EOE2IOE(x0EOE,0,Re);

indMax = find(s<=sf,1,"last");

x = zeros(6,indMax);
f = zeros(indMax,1);
f(1) = f0;
t = zeros(indMax,1);
t(1) = t0;
x(:,1) = x0IOE;

for k = 1:indMax-1
    x(:,k+1) = x(:,k) + (s(k+1)-s(k))*IOEDerivatives(s(k),x(:,k),csi*q,Re,mu);
    f(k+1) = f(k)-kt*csi;
    t(k+1) = t(k)+kt;
end