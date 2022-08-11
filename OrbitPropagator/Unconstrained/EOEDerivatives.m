function xdot = EOEDerivatives(t, x, u, mu)

%EOEDerivatives Compute the derivative of the EOE state
%
%   Inputs:
%       - Time (Unused but necessary for built-in ode integration)
%       - State vector
%       - Acceleration vector
%       - Planetary constant (for Earth use 398600)

% Equinoctial Orbital Elements
p = x(1);
f = x(2);
g = x(3);
h = x(4);
k = x(5);
L = x(6);
if p<0
    p = -p;
end

% Accelerations
ar = u(1);
at = u(2);
an = u(3);

% Definition of useful values
w = 1 + f*cos(L)+g*sin(L);
s2 = 1+h^2+k^2;
p_mu05 = sqrt(p/mu);

% State Derivative Calculation
pdot = 2*p/w*p_mu05*at;
fdot = p_mu05*(ar*sin(L) + ((w+1)*cos(L)+f)*at/w - (h*sin(L)-k*cos(L))*g*an/w);
gdot = p_mu05*(-ar*cos(L) + ((w+1)*sin(L)+g)*at/w + (h*sin(L)-k*cos(L))*g*an/w);
hdot = p_mu05*s2*an/2/w*cos(L);
kdot = p_mu05*s2*an/2/w*sin(L);
Ldot = sqrt(mu*p)*(w/p)^2+p_mu05/w*(h*sin(L)-k*cos(L))*an;

xdot = [pdot fdot gdot hdot kdot Ldot]';