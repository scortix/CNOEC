function s = myMoonpos(t)
c = 2459945.50000; % Julian day for 1/1/2023 at 00:00:00
time = t/86400 + c; % from seconds to Julian day in TDT scale
% time is the value representing the Julian day in TDT scale
cd ./'Moon Position'/
[x_m, y_m, z_m] = moonpos(time);
cd ../
s = [x_m; y_m; z_m];
end