function[DJ2r, DJ2t, DJ2n] = earthNonSphericity(r,h,k,L)

J2 = 0.001082;  % geopotential coefficient of earth's oblateness
mu = 398600;    % [km^3*s^-3] standard gravitational parameter of earh (mu = G*M)
Re = 6371;      % [km] earth equatorial radius

DJ2r = -(3*mu*J2*Re^2)/(2*r^4)*(1-12*(h*sin(L)-k*cos(L)^2)/(1+h^2+k^2)^2);
DJ2t = -(12*mu*J2*Re^2)/(r^4)*(h*sin(L)-k*cos(L))*(h*cos(L)+k*sin(L))/(1+h^2+k^2)^2;
DJ2n = -(6*mu*J2*Re^2)/(r^4)*(1-h^2-k^2)*(h*sin(L)-k*cos(L))/(1+h^2+k^2)^2;