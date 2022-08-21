clear
close
clc

set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultAxesTickLabelInterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');
Parameters % Load Parameters

%% Loading Data
load("NMPCsimA02.mat");
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
angleRef    = data(15,:);
uReal       = data(16:18,:);
dReal       = data(19:21,:);
mReal       = data(22,:);

refColor = cscheme{2};
realColor = cscheme{3};
%% State Plot
fs = figure();
fs.Position = [400 100 750 500];
subplot(2,3,1)
plot(t/3600,pRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,pReal,"LineWidth",1.5,"Color",realColor)
xlabel("Time $[h]$","FontSize",14)
title("p(t)","FontSize",14)
xlim([0, t(end)/3600])

subplot(2,3,2)
plot(t/3600,fRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,fReal,"LineWidth",1.5,"Color",realColor)
xlabel("Time $[h]$","FontSize",14)
title("f(t)","FontSize",14)
xlim([0, t(end)/3600])

subplot(2,3,3)
plot(t/3600,gRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,gReal,"LineWidth",1.5,"Color",realColor)
xlabel("Time $[h]$","FontSize",14)
title("g(t)","FontSize",14)
xlim([0, t(end)/3600])

subplot(2,3,4)
plot(t/3600,hRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,hReal,"LineWidth",1.5,"Color",realColor)
xlabel("Time $[h]$","FontSize",14)
title("h(t)","FontSize",14)
xlim([0, t(end)/3600])

subplot(2,3,5)
plot(t/3600,kRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,kReal,"LineWidth",1.5,"Color",realColor)
xlabel("Time $[h]$","FontSize",14)
title("k(t)","FontSize",14)
xlim([0, t(end)/3600])

subplot(2,3,6)
plot(t/3600,LRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,LReal,"LineWidth",1.5,"Color",realColor)
xlabel("Time $[h]$","FontSize",14)
title("L(t)","FontSize",14)
xlim([0, t(end)/3600])

legend("Reference","Real","FontSize",14,"Position",[0.22 0.85 0 0])

%% Mass plot
fm = figure();
fm.Position = [400 100 600 400];
plot(t/3600,mReal,"LineWidth",1.5,"Color",realColor)
xlabel("Time $[h]$","FontSize",14)
ylabel("Mass $[kg]$","FontSize",14)
xlim([0, t(end)/3600])

%% Consumption plot

xiReal = zeros(1,length(t));
for i = 1:length(t)-1
    xiReal(i) = (mReal(i)-mReal(i+1))/Ts/coeffT;
end

for k = 1:length(t)
    if xiRef(k) > 1
        xiRef(k) = 1;
    elseif xiRef(k) < 0
        xiRef(k) = 0;
    end
end

fx = figure();
fx.Position = [400 100 600 400];
plot(t/3600,xiRef,"LineWidth",1.5,"Color",refColor)
hold on
plot(t/3600,xiReal,"LineWidth",1.5,"Color",realColor)
xlim([0, t(end)/3600])
xlabel("Time $[h]$","FontSize",14)
ylabel("Thrust usage")
legend("Reference","Real","FontSize",14,"Position",[0.22 0.85 0 0])