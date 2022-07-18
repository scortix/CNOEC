function [fig]= Orb_Earth_plot(orb_in, orb_end, trsf, u, fig)
if nargin < 5
    fig = figure();

orb_in.pos_ge_tot(:,:,1)=Orbit_ge(orb_in.a, orb_in.e, orb_in.i, orb_in.OM, orb_in.om, 0, 2*pi);
orb_end.pos_ge_tot(:,:,1)=Orbit_ge(orb_end.a,orb_end.e,orb_end.i,orb_end.OM,orb_end.om,0,2*pi);

plotearth(fig,'MapType','bluemarble','FullColor',false,'NEOMap','earth');
hold on
fig.WindowState='maximized';
grid on
plot3(orb_in.pos_ge_tot(:,1,1),orb_in.pos_ge_tot(:,2,1),orb_in.pos_ge_tot(:,3,1),'Color','w','LineWidth',2.5,'LineStyle','--');
plot3(orb_end.pos_ge_tot(:,1,1),orb_end.pos_ge_tot(:,2,1),orb_end.pos_ge_tot(:,3,1),'Color','c','LineWidth',2.5,'LineStyle','--');
end
r = zeros(3,size(trsf,2));
if nargin < 5
    c = parula(size(trsf,2)-1);
    cArrow = [0.8500 0.3250 0.0980];
else
    c = winter(size(trsf,2)-1);
    cArrow = [0.2 0.7 0.2];
end
%u = 1e7*u;
for k = 1:size(trsf,2)
    %Orbit_ge(trsf(1,k),trsf(2,k),trsf(3,k),trsf(4,k),trsf(5,k),trsf(6,k-1),trsf(6,k))
    [r(:,k), ~] = paraorb2rv(trsf(1,k),trsf(2,k),trsf(3,k),trsf(4,k),trsf(5,k),trsf(6,k),398600);
    if k >= 2
        plot3(r(1,k-1:k),r(2,k-1:k),r(3,k-1:k),'Color',c(k-1,:), 'LineWidth', 2);
        %plot3(r(1,k-1)+[0 u(1,k-1)], r(2,k-1)+[0 u(2,k-1)], r(3,k-1)+[0 u(3,k-1)], '->' , 'Color','r')
        quiver3(r(1,k-1), r(2,k-1), r(3,k-1), u(1,k-1), u(2,k-1), u(3,k-1), 5e6, 'Color', cArrow)
    end
end
