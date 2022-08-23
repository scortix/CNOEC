function s = myMoonpos(t)

% MYMOONPOS function returns a vector s of the real moon position in the
% geocentrical reference frame taking as input a value t indicating the
% simulation time instant, useless given the fact that a model has been
% obtained in order to simulate faster, but if desired the respective part
% of code in the moon disturbance matlab function block must be uncommented
% and the part using the model must be commented

c = 2459945.50000; % Julian day for 1/1/2023 at 00:00:00
time = t/86400 + c; % from seconds to Julian day in TDT scale
% time is the value representing the Julian day in TDT scale
cd ./'Moon Position'/
[x_m, y_m, z_m] = moonpos(time);
cd ../
s = [x_m; y_m; z_m];
end