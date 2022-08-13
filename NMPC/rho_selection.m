function rho = rho_selection(x)
a = x(1);
e = x(2);
theta = x(6);

% [km kg/m^3 km] % check Bernelli slides for references
rho_table = [0 1.225 7.249 ;
    25 3.899e-2 6.349 ;
    30 1.774e-2 6.682 ;
    40 3.972e-3 7.554 ;
    50 1.057e-3 8.382 ;
    60 3.206e-4 7.714 ;
    70 8.770e-5 6.549 ;
    80 1.905e-5 5.779 ;
    90 3.396e-6 5.382 ;
    100 5.297e-7 5.877 ;
    110 9.661e-8 7.263 ;
    120 2.438e-8 9.473 ;
    130 8.484e-9 12.636 ;
    140 3.845e-9 16.149 ;
    150 2.070e-9 22.523 ;
    180 5.464e-10 29.740 ;
    200 2.789e-10 37.105 ;
    250 7.248e-11 45.548 ;
    300 2.418e-11 53.628 ;
    350 9.158e-12 53.298 ;
    400 3.725e-12 58.515 ;
    450 1.585e-12 60.828 ;
    500 6.967e-13 63.822 ;
    600 1.454e-13 71.835 ;
    700 3.614e-14 88.667 ;
    800 1.170e-14 124.64 ;
    900 5.245e-15 181.05 ;
    1000 3.019e-15 268.00];


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

