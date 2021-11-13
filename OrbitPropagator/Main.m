close all
clear all
clc

opt = odeset('MaxStep',200);
[t,y] = ode45(@(t,x) OrbitalDerivatives(t,x,[1e-3 0 0]',398600), [0 1e5], [1e4 0.2 pi/4 pi/2 pi/3 0]',opt);
%%
[theta, E] = plotting(y);