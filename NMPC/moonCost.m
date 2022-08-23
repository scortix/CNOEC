function[J] = moonCost(x,t,y)

%   MOONCOST returns the cost function value for a sinusoidal model with
%   offset to fit the real moon position taking as input a vector x of 4
%   parameters (in order: the offset, the phase, the period and the
%   amplitude), a time vector (in seconds) and a vector y of real positions
%   of the moon

offset = x(1);
phase = x(2);
period = x(3);
amplitude = x(4);

y_hat = amplitude*sin(2*pi/period*t+phase)+offset;

e = y-y_hat;
J = sum(e.^2)/length(e);