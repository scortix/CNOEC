function fig = plot2DOrbit(orb_in,orb_end,zCOE,tmax,titleStr)
if nargin < 5
    titleStr = ["Orbital Transfer", "Perifocal Reference Frame"];
end

fig = figure();
fig.Position = [680   421   827   557];
r = 6378.1;
circleEq = @(x,y) x.^2+y.^2-r^2;
earthContour = fimplicit(circleEq,[-r,r],'Color','k');
hold on
earth = fill(earthContour.XData,earthContour.YData,[11 44 100]*1.2/255);%[40 122 184]
orb_in.pos_ge_tot(:,:,1)=Orbit_ge(orb_in.a, orb_in.e, 0, 0, orb_in.om, 0, 2*pi);
orb_end.pos_ge_tot(:,:,1)=Orbit_ge(orb_end.a,orb_end.e,0,0,orb_end.om,0,2*pi);

r=zCOE(1,:).*(1-zCOE(2,:).^2)./(1+zCOE(2,:).*cos(zCOE(6,:)));
pos_pe(:,1)=r.*cos(zCOE(6,:));
pos_pe(:,2)=r.*sin(zCOE(6,:));
pos_pe(:,3)=0;
for i = 1:length(r)
    w = zCOE(5,i);
    Rw=[cos(w) sin(w) 0; -sin(w) cos(w) 0; 0 0 1];
    pos_pe(i,:) = Rw'*pos_pe(i,:)';
end
pos_pe = pos_pe';
h = ccplot(pos_pe(1,:),pos_pe(2,:),linspace(0,tmax/3600,size(zCOE,2)),colormap("parula"));
caxis([0 tmax/3600])
c = colorbar;
c.Limits = [0 tmax/3600];
c.Label.Interpreter = "latex";
c.Label.FontSize = 16;
c.Label.String = "Time [h]";
c.TickLabels;

pin = plot(orb_in.pos_ge_tot(:,1),orb_in.pos_ge_tot(:,2),'LineWidth',3,'Color','k','LineStyle','--');
pend = plot(orb_end.pos_ge_tot(:,1),orb_end.pos_ge_tot(:,2),'LineWidth',3,'Color',[0 0.4470 0.7410],'LineStyle','--');
axis equal

legend([h(1), pin, pend, earth],["Transfer","Initial Orbit","Final Orbit","Earth"], "Position",[4.4800e-02 8.1705e-01 1.8274e-01 1.2962e-01], "FontSize", 14)
xlabel("X-Coordinate $[km]$","FontSize",14)
ylabel("Y-Coordinate $[km]$","FontSize",14)
title(titleStr,"FontSize",18)
grid on
ax1 = gca;

h = plotearth(fig,'MapType','bluemarble','FullColor',false,'NEOMap','earth');
set(h,'Color','none','Box','off');
view([sin(orb_in.i)*sin(orb_in.OM),-sin(orb_in.i)*cos(orb_in.OM),cos(orb_in.i)])
h.Position = ax1.Position;
h.YLim = sin(orb_in.i)*ax1.YLim;
h.ZLim = cos(orb_in.i)*ax1.YLim;
h.XLim = ax1.XLim;
h.Clipping = 'off';
axis(h,'off')
hLink = linkprop([ax1,h],{'Position'});
setappdata(gcf,'StoreTheLink',hLink);
end