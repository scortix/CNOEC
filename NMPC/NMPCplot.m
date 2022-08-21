clear
close
clc

set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultAxesTickLabelInterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');
Parameters % Load Parameters

%% Loading Data
alpha   = "08"; % "02" or "08"
dist    = "dist";   % "" or "dist"


load("NMPCsimA"+alpha+dist+".mat");
cscheme = {'#AA4499','#EE7733','#0072BD','#CC3311','#228833','#e6ab02'};
t           = data(1,:);
pRef        = data(2,:);
pReal       = data(3,:);
fRef        = data(4,:);
fReal       = data(5,:);
gRef        = data(6,:);
gReal       = data(7,:);
hRef        = data(8,:);
hReal       = data(9,:);
kRef        = data(10,:);
kReal       = data(11,:);
LRef        = data(12,:);
LReal       = data(13,:);
xiRef       = data(14,:);
xiReal      = data(15,:);
angleRef    = data(16,:);
dirReal     = data(17:19,:);
uReal       = data(20:22,:);
dReal       = data(23:25,:);
mReal       = data(26,:);

for k = 1: length(dirReal)
    if norm(dirReal(:,k)) ~= 0
        dirReal(:,k) = dirReal(:,k)/norm(dirReal(:,k));
    end
end


refColor = cscheme{2};
realColor = cscheme{3};
%% State Plot
fs = figure();
fs.Position = [400 100 750 500];
subplot(2,3,1)
plot(t/3600,pRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,pReal,"LineWidth",1.5,"Color",realColor)
grid on
xlabel("Time $[h]$","FontSize",14)
title("p(t)","FontSize",14)
xlim([0, t(end)/3600])

subplot(2,3,2)
plot(t/3600,fRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,fReal,"LineWidth",1.5,"Color",realColor)
grid on
xlabel("Time $[h]$","FontSize",14)
title("f(t)","FontSize",14)
xlim([0, t(end)/3600])

subplot(2,3,3)
plot(t/3600,gRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,gReal,"LineWidth",1.5,"Color",realColor)
grid on
xlabel("Time $[h]$","FontSize",14)
title("g(t)","FontSize",14)
xlim([0, t(end)/3600])

subplot(2,3,4)
plot(t/3600,hRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,hReal,"LineWidth",1.5,"Color",realColor)
grid on
xlabel("Time $[h]$","FontSize",14)
title("h(t)","FontSize",14)
xlim([0, t(end)/3600])

subplot(2,3,5)
plot(t/3600,kRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,kReal,"LineWidth",1.5,"Color",realColor)
grid on
xlabel("Time $[h]$","FontSize",14)
title("k(t)","FontSize",14)
xlim([0, t(end)/3600])

subplot(2,3,6)
plot(t/3600,LRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,LReal,"LineWidth",1.5,"Color",realColor)
xlabel("Time $[h]$","FontSize",14)
title("L(t)","FontSize",14)
grid on
xlim([0, t(end)/3600])

legend("Reference","Real","FontSize",14,"Position",[0.22 0.85 0 0])
saveas(fs,"zCompA"+alpha+dist+".eps","epsc")
%% Mass plot
fm = figure();
fm.Position = [400 100 300 200];
plot(t/3600,mReal,"LineWidth",1.5,"Color",realColor)
grid on
xlabel("Time $[h]$","FontSize",14)
ylabel("Mass $[kg]$","FontSize",14)
xlim([0, t(end)/3600])

saveas(fm,"massA"+alpha+dist+".eps","epsc")

%% Consumption and direction plot

for k = 1:length(t)
    if xiRef(k) > 1
        xiRef(k) = 1;
    elseif xiRef(k) < 0
        xiRef(k) = 0;
    end
end

fx = figure();
subplot(2,3,(1:3))
fx.Position = [400 100 600 400];
plot(t/3600,xiRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,xiReal,"LineWidth",1.5,"Color",realColor)
grid on
xlim([0, t(end)/3600])
xlabel("Time $[h]$","FontSize",14)
ylabel("Throttle","FontSize",14)
legend("Reference","Real","FontSize",14,"Position",[0.22 0.85 0 0])

subplot(2,3,4)
plot(t/3600,sin(angleRef),"LineWidth",.5,"Color",refColor)
hold on
plot(t/3600,dirReal(1,:),"LineWidth",.5,"Color",realColor)
grid on
xlim([0, t(end)/3600])
xlabel("Time $[h]$","FontSize",14)
ylabel("Radial","FontSize",14)

subplot(2,3,5)
plot(t/3600,cos(angleRef),"LineWidth",.5,"Color",refColor)
hold on
plot(t/3600,dirReal(2,:),"LineWidth",.5,"Color",realColor)
grid on
xlim([0, t(end)/3600])
xlabel("Time $[h]$","FontSize",14)
ylabel("Tangential","FontSize",14)

subplot(2,3,6)
plot(t/3600,zeros(1,length(t)),"LineWidth",.5,"Color",refColor)
hold on
plot(t/3600,dirReal(2,:),"LineWidth",.5,"Color",realColor)
grid on
xlim([0, t(end)/3600])
xlabel("Time $[h]$","FontSize",14)
ylabel("Normal","FontSize",14)

saveas(fx,"xiCompA"+alpha+dist+".eps","epsc")

%% Input and disturbance plot

fud = figure();
fud.Position = [400 100 900 300];

subplot(1,3,1)
plot(t/3600,uReal(1,:),"LineWidth",.5,"Color",cscheme{6})
hold on
plot(t/3600,dReal(1,:),"LineWidth",.5,"Color",cscheme{3})
grid on
xlim([0, t(end)/3600])
xlabel("Time $[h]$","FontSize",14)
ylabel("Perturbation $[km/s^2]$","FontSize",14)
title("Radial direction","FontSize",14)

subplot(1,3,2)
plot(t/3600,uReal(2,:),"LineWidth",.5,"Color",cscheme{6})
hold on
plot(t/3600,dReal(2,:),"LineWidth",.5,"Color",cscheme{3})
grid on
xlim([0, t(end)/3600])
xlabel("Time $[h]$","FontSize",14)
ylabel("Perturbation $[km/s^2]$","FontSize",14)
title("Tangential direction","FontSize",14)

subplot(1,3,3)
plot(t/3600,uReal(3,:),"LineWidth",.5,"Color",cscheme{6})
hold on
plot(t/3600,dReal(3,:),"LineWidth",.5,"Color",cscheme{3})
grid on
xlim([0, t(end)/3600])
xlabel("Time $[h]$","FontSize",14)
ylabel("Perturbation $[km/s^2]$","FontSize",14)
title("Normal direction","FontSize",14)
legend("Input","Disturbance","FontSize",14,"Position",[0.2 0.85 0 0])

saveas(fud,"udA"+alpha+dist+".eps","epsc")