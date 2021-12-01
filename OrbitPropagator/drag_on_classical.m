function [drag] = drag_on_classical(x,ad)

% drag_on_classical is a function that takes as inputs the classical
% orbital elements with the drag acceleration and gives as output the ODE
% of the states put in COE representation

%%%% pay attention %%%%
% variation of mean anomaly calculated instead of the true one;

mu = 398600;
n = sqrt(mu/a^3);

if isa(x, 'double')

    a = x(1);
    e = x(2);
%     i = x(3);
%     OM = x(4);
%     om = x(5);
    theta = x(6);

elseif isa(x, 'struct')

    a = x.a;
    e = x.e;
%     i = x.i;
%     om = x.om;
%     OM = x.OM;
    theta = x.theta;

end  

xi = sqrt(1-e^2)/sqrt(1+2*e*cos(theta)+e^2);

adot = -2*ad/n/xi; % semimajor axis variation
edot = -2*ad/n/a*xi*(e+cos(theta)); % eccentricity variation
omdot = -2*ad/n/a/e*xi*sin(theta); % argument of periapsis variation
Mdot = 2*ad/n/a/e*xi*sin(theta)*(1+e*cos(theta)+e^2)/...
    (1+e*cos(theta))*sqrt(1-e^2)+n; % mean anomaly variation
idot = 0; % inclination variation 
OMdot = 0; % longitude of the ascending node variation

drag = [adot edot idot OMdot omdot Mdot]';

end