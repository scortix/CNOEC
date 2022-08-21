close all
clear
clc

Parameters

stopTime = 6e6;
c = 2459945.50000; % Julian day for 1/1/2023 at 00:00:00
t_sim = 0:Ts*ratio:stopTime;
time = t_sim/86400 + c; % from seconds to Julian day in TDT scale
% time is the value representing the Julian day in TDT scale
cd ./'Moon Position'/
[x_m, y_m, z_m] = moonpos(time);
cd ../
s = [x_m; y_m; z_m];
t_plot = t_sim/3600;
%%

initX = [mean(x_m) pi/2+pi/6 1/5/86400 4e5]';
initY = [mean(y_m) pi/3 1/5/86400 3e5]';
initZ = [mean(z_m) pi/3 1/5/86400 2e5]';

%% Estimation
funX = @(x) moonCost(x,t_sim,x_m);
funY = @(x) moonCost(x,t_sim,y_m);
funZ = @(x) moonCost(x,t_sim,z_m);

funXunc = @(x) moonCost(x,t_sim,x_m);
funYunc = @(x) moonCost(x,t_sim,y_m);
funZunc = @(x) moonCost(x,t_sim,z_m);


opt = myoptimset_unc;

x_par = fminsearch(funX,initX);
x_par_unc = myfminunc(funX,initX,opt);


y_par = fminsearch(funY,initY);
y_par_unc = myfminunc(funY,initY,opt);

z_par = fminsearch(funZ,initZ);
z_par_unc = myfminunc(funZ,initZ,opt);

x_m_hatUnc = x_par_unc(4)*sin(x_par_unc(3)*t_sim+x_par_unc(2))+x_par_unc(1);
x_m_hat = x_par(1)+x_par(4)*sin(x_par(3)*t_sim+x_par(2));
x_m0_hat = initX(1)+initX(4)*sin(initX(3)*t_sim+initX(2));

y_m_hatUnc = y_par_unc(4)*sin(y_par_unc(3)*t_sim+y_par_unc(2))+y_par_unc(1);
y_m_hat = y_par(4)*sin(y_par(3)*t_sim+y_par(2))+y_par(1);
y_m0_hat = initY(1)+initY(4)*sin(initY(3)*t_sim+initY(2));

z_m_hatUnc = z_par_unc(4)*sin(z_par_unc(3)*t_sim+z_par_unc(2))+z_par_unc(1);
z_m_hat = z_par(4)*sin(z_par(3)*t_sim+z_par(2))+z_par(1);
z_m0_hat = initZ(1)+initZ(4)*sin(initZ(3)*t_sim+initZ(2));
%%

set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultAxesTickLabelInterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');

lw = 1.5;
f = figure();
f.Position = [100 300 1200 300];
subplot(1,3,1)
plot(t_plot,x_m,"LineWidth",lw,"Color",cscheme{3})
hold on
plot(t_plot,x_m_hat,"LineWidth",lw,"Color",cscheme{6})
hold on
plot(t_plot,x_m0_hat,"LineWidth",lw,"Color",cscheme{1})
hold on
plot(t_plot,x_m_hatUnc,"LineWidth",lw,"Color",cscheme{5})
xlim([0 t_plot(end)])
xlabel("Time $[h]$","FontSize",14)
ylabel("$x_{moon}$ $[km]$","FontSize",14)


subplot(1,3,2)
plot(t_plot,y_m,"LineWidth",lw,"Color",cscheme{3})
hold on
plot(t_plot,y_m_hat,"LineWidth",lw,"Color",cscheme{6})
hold on
plot(t_plot,y_m0_hat,"LineWidth",lw,"Color",cscheme{1})
hold on
plot(t_plot,y_m_hatUnc,"LineWidth",lw,"Color",cscheme{5})
xlim([0 t_plot(end)])
xlabel("Time $[h]$","FontSize",14)
ylabel("$y_{moon}$ $[km]$","FontSize",14)


subplot(1,3,3)
plot(t_plot,z_m,"LineWidth",lw,"Color",cscheme{3})
hold on
plot(t_plot,z_m_hat,"LineWidth",lw,"Color",cscheme{6})
hold on
plot(t_plot,z_m0_hat,"LineWidth",lw,"Color",cscheme{1})
hold on
plot(t_plot,z_m_hatUnc,"LineWidth",lw,"Color",cscheme{5})
xlabel("Time $[h]$","FontSize",14)
ylabel("$z_{moon}$ $[km]$","FontSize",14)
xlim([0 t_plot(end)])
legend("Real","Estimated","Init Guess","myf","Position",[0.165 0.84 0 0])
save("moonModelParams","x_par","y_par","z_par")

%%
saveas(f,"moon.eps","epsc")
