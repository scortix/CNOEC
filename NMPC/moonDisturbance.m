function[t] = moonDisturbance(a,e,i,Omega,w,theta,time)

mu_earth = 398600;
[r,~] = paraorb2rv(a,e,i,Omega,w,theta,mu_earth);
r = r';

% r position vector of the spacecraft


mu_moon = 490487;               % moon standard gravitational coefficient





d = r-s;                            % vector from moon to spacecraft
d_mod = sqrt(d(1)^2+d(2)^2+d(3)^2); % modulus of d
q = r'*(r-2*s)/(s'*s);
F = @(q) q*(3+3*q+q^2)/(1+(1+q)^(3/2));

t = -mu_moon/d_mod^3*(r+F(q)*s);