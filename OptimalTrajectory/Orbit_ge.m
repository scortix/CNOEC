function [Pos_ge]=Orbit_ge(a, e, i, Omega, w, thetai,thetaf)
n=1000;
if thetai>=thetaf
    thetaf=thetaf+2*pi;
end
theta1=linspace(thetai,thetaf,n);
p=a.*(1-e.^2);
for j=1:length(theta1)                       %Detrmino ellisse nel sistema di riferimento perifocale
    r=p./(1+e.*cos(theta1(j)));
    pos_pe(j,1)=r.*cos(theta1(j));
    pos_pe(j,2)=r.*sin(theta1(j));
end
RO=[cos(Omega), sin(Omega), 0; -sin(Omega), cos(Omega), 0; 0, 0, 1];
Ri=[1 0 0; 0 cos(i) sin(i); 0 -sin(i) cos(i)];
Rw=[cos(w) sin(w) 0; -sin(w) cos(w) 0; 0 0 1];          % Det Matrice di rotazine Orbita finale
TGEPF=Rw*Ri*RO;
TPFGE=TGEPF';
Pos_pf=[pos_pe(:,1),pos_pe(:,2),zeros([n,1])];
for j=1:n                                   %Ricavo vettore posizione 3D in ge applicando matrice TPFGE
    Pos_ge1=TPFGE*Pos_pf(j,:)';
    Pos_ge(j,:)=Pos_ge1';
end
end