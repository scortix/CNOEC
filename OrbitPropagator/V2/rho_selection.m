function [rho] = rho_selection(par, theta)

a = par(1); % semimajor axis [km]
e = par(2); % eccentricity
p = a*(1-e^2); % semilatum rectum [km]
r = p/(1+e*cos(theta)); % distance from focus in km
earth_radius = 6.3781e+3; %[km] %correction, before it was e+6
h = r - earth_radius; %[km]
% R = sqrt(r^2+(e*a)^2+2*r*e*a*cos(theta)) % distance from earth

%selection of rho_
select = 0;

for ind = 2:28
    if h < rho_table(ind,1)
        select = ind - 1;
        break
    end
end

if select == 0
    select = 28;
end

h_0     =   rho_table(select, 1);
rho_0   =   rho_table(select, 2);
H       =   rho_table(select, 3);
rho = rho_0*exp(-(h-h_0)/H);

end