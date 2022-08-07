function [rr, vv]= paraorb2rv(a, e, i, Omega, w, theta, mu)
%% Matrici di rotazione
RO=[cos(Omega), sin(Omega), 0; -sin(Omega), cos(Omega), 0; 0, 0, 1];
Ri=[1 0 0; 0 cos(i) sin(i); 0 -sin(i) cos(i)];
Rw=[cos(w) sin(w) 0; -sin(w) cos(w) 0; 0 0 1];
TGEPF=Rw*Ri*RO;

%% Versori I e J nel nuovo sistema di riferimento
p=TGEPF(1,:); q=TGEPF(2,:);

%% Calcolo di rr e vv
vtheta=sqrt(mu/(a*(1-e^2)))*(1+e*cos(theta));
%h=mu*(1+e*cos(theta))/vtheta; %Provare con h=sqrt(mu*a*(1-e^2));
h=sqrt(mu*a*(1-e^2));
rr=h^2/mu*1/(1+e*cos(theta))*(cos(theta)*p+sin(theta)*q);
vv=mu/h*(-sin(theta)*p+(e+cos(theta))*q);
end