function [y] = COE2EOE(x)

%COE2EOE  Function to convert Classical Orbital Elements to Equinoctial 
%   Orbital Elements.
%   EOE = COE2EOE(COE) receives as input a vector of the 6 classical OE and
%   gives as output a column vector of the 6 equinoctial OE.
%   In particular, the input vector must be of the form 
%   COE = [a e i om OM theta], where
%       a: semimajor axis
%       e: eccentricity
%       i: inclination
%       om: argument of periapsis
%       OM: longitude of the ascending node
%       theta: true anomaly
%   The output vector is in the form EOE = [p f g h k L], where p is the 
%   semilatus rectum and L is the true longitude

if isa(x, 'double')

    a = x(1);
    e = x(2);
    i = x(3);
    OM = x(4);
    om = x(5);
    theta = x(6);

elseif isa(x, 'struct')

    a = x.a;
    e = x.e;
    i = x.i;
    om = x.om;
    OM = x.OM;
    theta = x.theta;

end  

p = a*(1-e^2);
f = e*cos(om+OM);
g = e*sin(om+OM);
h = cos(OM)*tan(i/2);
k = sin(OM)*tan(i/2);
L = OM+om+theta;

y = [p f g h k L]';