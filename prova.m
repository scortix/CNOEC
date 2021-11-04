theta = pi/3;
phi = pi/5;
R = 6371.2;
r = R+500;

k = size(IGRF,1);
j = size(IGRF,2) - 1;

%% Calculate Legendre Polynomial P
K = @(n,m) (n>1)*((n-1)^2-m^2)/((2*n-1)*(2*n-3));
P = zeros(k+1,j+1);
P(1,1) = 1;
P(2,2) = sin(theta);
for n = 3:k+1
    P(n,n) = sin(theta)*P(n-1,n-1);
    for m = 1:j+1
        if n ~= m
            P(n,m) = cos(theta)*P(n-1,m) - K(n,m)*P(n-2,m);
        end
    end
end

%% Calculate Magnetic Field
Br = 0;
Btheta = 0;
Bphi = 0;

for n = 1:k
    for m = 0:n
        Br = Br + (R/r)^(n+2)*(n+1)*(IGRF(n,m+1,1)*cos(m*phi)+IGRF(n,m+1,2)*sin(m*phi))*P(n+1,m+1);
        Btheta = Btheta - (R/r)^(n+2)*(IGRF(n,m+1,1)*cos(m*phi)+IGRF(n,m+1,2)*sin(m*phi))*LegendreDer(n,m,theta);
        Bphi = Bphi + (R/r)^(n+2)*m*(-IGRF(n,m+1,1)*sin(m*phi)+IGRF(n,m+1,2)*cos(m*phi))*P(n+1,m+1);
    end
end
Bphi = Bphi/sin(theta);
norm([Br,Btheta,Bphi])




function Pnm = Legendre(k,j,theta)
K = @(n,m) (n>1)*((n-1)^2-m^2)/((2*n-1)*(2*n-3));
P = zeros(k+1,j+1);
P(1,1) = 1;
P(2,2) = sin(theta);
for n = 3:k+1
    P(n,n) = sin(theta)*P(n-1,n-1);
    for m = 1:j+1
        if n ~= m
            P(n,m) = cos(theta)*P(n-1,m) - K(n,m)*P(n-2,m);
        end
    end
end
Pnm = P(k+1,j+1);
end
function dP = LegendreDer(n,m,theta)
    eta = eps^(1/3);
    dP = (Legendre(n,m,theta+eta)-Legendre(n,m,theta-eta))/(2*eta);
end