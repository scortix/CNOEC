function [a, e, i, Omega, w, theta] = rv2paraorb(rr,vv,mu)
r=norm(rr);
v=norm(vv);
vr=1/r*dot(rr,vv);
a=1/(2/r-v^2/mu);
h=cross(rr,vv);
i=acos(h(3)/norm(h));
N=[-h(2), h(1), 0];
Omega=(acos(N(1)/norm(N)))*(N(2)>=0)+(2*pi-acos(N(1)/norm(N)))*(N(2)<0);
ee=1/mu*((v^2-mu/r)*rr-r*vr*vv);
e=norm(ee);
w=acos(dot(N,ee)/(norm(N)*e))*(ee(3)>=0)+(2*pi-acos(dot(N,ee)/(norm(N)*e)))*(ee(3)<0);
theta=mod(acos(dot(ee,rr)/(e*r))*(vr>=0)+(2*pi-acos(dot(ee,rr)/(e*r)))*(vr<0),2*pi);
end