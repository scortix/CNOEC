function[J] = moonCost(x,t,y)

offset = x(1);
phase = x(2);
freq = x(3);
amplitude = x(4);

y_hat = amplitude*sin(freq*t+phase)+offset;

e = y-y_hat;
J = 0;
for k = 1:length(t)
    J = (J*(k-1) + e(k)^2)/k;
end