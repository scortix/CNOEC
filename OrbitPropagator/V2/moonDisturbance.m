function[t] = moonDisturbance(a,e,i,Omega,w,theta,time)

mu_earth = 398600;
[r,~] = paraorb2rv(a,e,i,Omega,w,theta,mu_earth);

c = 2459945.50000; % Julian day for 1/1/2023 at 00:00:00

time = time/86400 + c; % from seconds to Julian day in TDT scale
% r position vector of the spacecraft
% time is the value representing the Julian day in TDT scale

mu_moon = 490487;               % moon standard gravitational coefficient

cd ./'Moon Position'/
[x_m, y_m, z_m] = moonpos(time);
cd ../
s = [x_m y_m z_m]';


d = r-s;                            % vector from moon to spacecraft
d_mod = sqrt(d(1)^2+d(2)^2+d(3)^2); % modulus of d
q = r'*(r-2*s)/(s'*s);
F = @(q) q*(3+3*q+q^2)/(1+(1+q)^(3/2));

t = -mu_moon/d_mod^3*(r+F(q)*s);