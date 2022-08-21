function[J] = moonCost(x,t,y)

offset = x(1);
phase = x(2);
per = x(3);
amplitude = x(4);

y_hat = amplitude*sin(2*pi/per*t+phase)+offset;

e = y-y_hat;
J = sum(e.^2)/length(e);