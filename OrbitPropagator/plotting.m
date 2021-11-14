function [theta, Eout] = plotting(y)

theta = zeros(size(y,1),1);
Eout = theta;
opt = optimset('Display', 'none');
for k = 1:length(theta)
    
    E = fzero(@(E) E-y(k,2)*sin(E)-y(k,6),pi/4, opt);
    ctheta = (y(k,2)-cos(E))/(y(k,2)*cos(E)-1);
    r = y(k,1)*(1-y(k,2)^2)/(1+y(k,2)*ctheta);
    theta(k) = atan2(sin(E)/r*y(k,1)*sqrt(1-y(k,2)^2), ctheta);
    Eout(k) = E;
end

f = figure();
plot(y(:,1).*(1-y(:,2).^2)./(1+y(:,2).*cos(theta)).*cos(theta), y(:,1).*(1-y(:,2).^2)./(1+y(:,2).*cos(theta)).*sin(theta))
hold on
plot(0,0,'ro ','MarkerSize', 5)

f.WindowState = 'Maximized';
axis equal
grid on
grid minor