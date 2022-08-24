function [fig]= Orb_Earth_plot(orb_in, orb_end, trsf, fig)
if nargin < 4
    fig = figure();
end
orb_in.pos_ge_tot(:,:,1)=Orbit_ge(orb_in.a, orb_in.e, orb_in.i, orb_in.OM, orb_in.om, 0, 2*pi);
orb_end.pos_ge_tot(:,:,1)=Orbit_ge(orb_end.a,orb_end.e,orb_end.i,orb_end.OM,orb_end.om,0,2*pi);

earth = plotearth(fig,'MapType','bluemarble','FullColor',false,'NEOMap','earth');
hold on
pin = plot3(orb_in.pos_ge_tot(:,1,1),orb_in.pos_ge_tot(:,2,1),orb_in.pos_ge_tot(:,3,1),'Color','k','LineWidth',2.5,'LineStyle','--');
hold on
pend = plot3(orb_end.pos_ge_tot(:,1,1),orb_end.pos_ge_tot(:,2,1),orb_end.pos_ge_tot(:,3,1),'Color',[0 0.4470 0.7410],'LineWidth',2.5,'LineStyle','--');

r = zeros(3,size(trsf,2));
c = parula(size(trsf,2)-1);
tmax = 6e5;
for k = 1:size(trsf,2)
    [r(:,k), ~] = paraorb2rv(trsf(1,k),trsf(2,k),trsf(3,k),trsf(4,k),trsf(5,k),trsf(6,k),398600);
    if k >= 2
        h(k-1) = plot3(r(1,k-1:k),r(2,k-1:k),r(3,k-1:k),'Color',c(k-1,:), 'LineWidth', 1);
    end
end
view([sin(orb_in.i)*sin(orb_in.OM),-sin(orb_in.i)*cos(orb_in.OM),cos(orb_in.i)])
ax1 = gca;
ax2 = axes();
set(ax2,'Visible','off');
colormap(ax2,'parula')
caxis([0 tmax/3600])
c = colorbar;
c.Limits = [0 tmax/3600];
c.Label.Interpreter = "latex";
c.Label.FontSize = 16;
c.Label.String = "Time [h]";
c.TickLabels;
axes(ax1)
legend([h(1), pin, pend, earth],["Transfer","Initial Orbit","Final Orbit","Earth"]);


