close all
clear all
clc

theta = linspace(-pi,pi,360);
f = theta;
for k = 1:length(theta)
    k
    try
        f(k) = EOEf(theta(k));
    catch ME
        f(k) = 0;
    end
end

%%
plot(theta*180/pi,f)
grid on
grid minor