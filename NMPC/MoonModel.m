close all
clear
clc

Ts = 100;
ratio = 10;
stopTime = 6e6;
c = 2459945.50000; % Julian day for 1/1/2023 at 00:00:00
t_sim = 0:Ts*ratio:stopTime;
time = t_sim/86400 + c; % from seconds to Julian day in TDT scale
% time is the value representing the Julian day in TDT scale
cd ./'Moon Position'/
[x_m, y_m, z_m] = moonpos(time);
cd ../
s = [x_m; y_m; z_m];
%%

initX = [mean(x_m) pi/2+pi/6 1/5/86400 4e5]';
initY = [mean(y_m) pi/3 1/5/86400 3e5]';
initZ = [mean(z_m) pi/3 1/5/86400 2e5]';

%% Estimation
funX = @(x) moonCost(x,t_sim,x_m);
funY = @(x) moonCost(x,t_sim,y_m);
funZ = @(x) moonCost(x,t_sim,z_m);

x_par = fminsearch(funX,initX);
y_par = fminsearch(funY,initY);
z_par = fminsearch(funZ,initZ);

x_m_hat = x_par(1)+x_par(4)*sin(x_par(3)*t_sim+x_par(2));
x_m0_hat = initX(1)+initX(4)*sin(initX(3)*t_sim+initX(2));
y_m_hat = y_par(4)*sin(y_par(3)*t_sim+y_par(2))+y_par(1);
y_m0_hat = initY(1)+initY(4)*sin(initY(3)*t_sim+initY(2));
z_m_hat = z_par(4)*sin(z_par(3)*t_sim+z_par(2))+z_par(1);
z_m0_hat = initZ(1)+initZ(4)*sin(initZ(3)*t_sim+initZ(2));
%%
figure(1)
plot(t_sim,x_m)
hold on
plot(t_sim,x_m_hat)
hold on
plot(t_sim,x_m0_hat)
legend("real","estimated","init guess")
figure(2)
plot(t_sim,y_m)
hold on
plot(t_sim,y_m_hat)
hold on
plot(t_sim,y_m0_hat)
legend("real","estimated","init guess")
figure(3)
plot(t_sim,z_m)
hold on
plot(t_sim,z_m_hat)
hold on
plot(t_sim,z_m0_hat)
legend("real","estimated","init guess")
save("moonModelParams","x_par","y_par","z_par")
