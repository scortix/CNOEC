function [y] = EOE2COE(x)

%EOE2COE  Function to convert Equinoctial Orbital Elements to Classical 
%   Orbital Elements.
%   COE = EOE2COE(EOE) receives as input a vector of the 6 equinoctial OE and
%   gives as output a column vector of the 6 classical OE.
%   In particular, the input vector must be of the form EOE = [p f g h k L],
%   where p is the semilatus rectum and L is the true longitude
%   The output vector is in the form COE = [a e i om OM theta]', where
%       a: semimajor axis
%       e: eccentricity
%       i: inclination
%       om: argument of periapsis
%       OM: longitude of the ascending node
%       theta: true anomaly

p = x(1);
f = x(2);
g = x(3);
h = x(4);
k = x(5);
L = x(6);

a = p/(1-f^2-g^2);
e = sqrt(f^2+g^2);
i = atan2(2*sqrt(h^2+k^2), 1-h^2-k^2);
om = atan2(g*h-f*k, f*h+g*k);
OM = atan2(k,h);
theta = L-OM-om;

y = [a e i om OM theta]';

% u = om+theta Argument of latitude