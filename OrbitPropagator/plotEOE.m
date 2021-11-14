function [] = plotEOE(x)

y = x';
for k = 1:size(x,1)
    y(:,k) = EOE2COE(x(k,:));
end
y = y';

f = figure();
plot(y(:,1).*(1-y(:,2).^2)./(1+y(:,2).*cos(y(:,6))).*cos(y(:,6)), y(:,1).*(1-y(:,2).^2)./(1+y(:,2).*cos(y(:,6))).*sin(y(:,6)))
hold on
plot(0,0,'ro ','MarkerSize', 5)

f.WindowState = 'Maximized';
axis equal
grid on
grid minor
