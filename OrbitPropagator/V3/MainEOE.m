close all
clear
clc
pool = gcp("nocreate");
if isempty(gcp)
    parpool;
end
set(groot,'defaulttextinterpreter','latex');  
set(groot,'defaultAxesTickLabelInterpreter','latex');  
set(groot,'defaultLegendInterpreter','latex');
load("simFinalOk2.mat")
alphaCellOld = alphaCell;

%% Parameters Definition and Initialization
% Integration Parameters
Ts = 100; % Discrete time step [s]
tmax = 6e5; % Maximum time [s]
ratio = 10; % length(t)/length(u)
t = 0:Ts:tmax; % Time vector

% Orbit Parameters
mu = 398600; % Earth Standard Gravitational Parameter [km^3/s^2]
orb_in = struct('a', 8000, 'e', 0, 'i', pi/4, 'OM', 0, 'om', 0, 'theta', 0); % Initial orbit
orb_end = struct('a', 10000, 'e', 0.2, 'i', pi/4, 'OM', 0, 'om', pi/3, 'theta', 0); % Final orbit

% Thruster Parameters
Tmax = 10; % Maximum Thrust [N]
Isp = 1000; % Specific Impulse [s]
g0 = 9.80665; % Standard Earth Gravity [m/s^2]
m0 = 1000; % Initial Mass

% Vector Initialization
zEOE = zeros(6,length(t)); % State vector initialization
zEOE0 = COE2EOE(orb_in); % Initial condition conversion to EOE state
zEOE(:,1) = zEOE0; % Set first state vector equal to initial condition
zEOEbar = COE2EOE(orb_end); % Desired state vector in EOE

lu = (length(t)-1)/ratio+1; % Length of the input vector
theta0 = 0; % True anomaly for starting the transfer - Initial Guess
csi = 1*ones(lu,1); % Throttle
ang = pi/2*ones(lu,1); % Direction Angle for the Thrust
x0 = [theta0;
    csi;
    ang]; % Optimization Vector Initial Guess

%% Optimization routine
opt = myoptimset; % Optimizer Options
alpha = 0:0.2:1;
alphaCell = cell(length(alpha),5); % Cell array to save all computed solutions
ratioVec = [ratio]; % Vector of ratio values used for optimization
opt.Hessmethod = "BFGS";
% Compute the minimizers for the various alphas
for k = 2:length(alpha)
    x0 = alphaCellOld{k,2};
%     for i = 1:length(ratioVec)
        
        fun = @(x) costFun_mex(x, Ts, tmax, zEOE0, zEOEbar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k)); % Cost Function Definition
        tNew = 0:ratio*Ts:tmax; % Time vector with length equal to the input vector

%         if i > 1
%             tOld = 0:ratioVec(i-1)*Ts:tmax; % Old time vector
% 
%             x0 = [x(1);
%                 interp1(tOld,x(2:(end+1)/2),tNew,"makima")';
%                 interp1(tOld,x((end+1)/2+1:end),tNew,"makima")']; % Resample Optimization Vector

            
%         end
        lu = (length(t)-1)/ratio+1; % Length of the input vector
        % Inequality Constraints Definition
        C = [zeros(lu,1) eye(lu) zeros(lu);
            zeros(lu,1) -eye(lu) zeros(lu)];
        d = [zeros(lu,1);
            -ones(lu,1)];

        % Optimization
        x = mySQP(fun,x0,[],[],C,d,0,1+1+0*length(t),opt);
%     end
    % Call the cost function to compute the single terms of the final cost
    % and the state vector
    [~,zEOE,tCost,m] = costFun_mex(x, Ts, tmax, zEOE0, zEOEbar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k));
    alphaCell(k,:) = {alpha(k),x,zEOE,tCost,m}; % Save results in the cell array
end

%% Plotting Result
zCOE0 = EOE2COE(zEOE0); % Inital state vector in COE
zCOEbar = EOE2COE(zEOEbar); % Desired state vector in COE
Qdiag = (zCOEbar([1:2 5])-zCOE0([1:2 5])); % Expected state variation
Qdiag = Qdiag + 0.1*(Qdiag==0); % Made to avoid having a zero as element of the vector
Q = diag(1./Qdiag.^2); % Weight matrix for the state error computation
tPlot = t/3600; % Convert time in hour

% Create necessary figure objects
f1 = figure();
f2 = figure();
f3 = figure();
f4 = figure();

% Label for plots
label = cell(length(alpha),1);
for k = 1:length(alpha)
    label{k} = "$\alpha = " + num2str(alpha(k)) + "$";
end

for k = 1:length(alpha)
    x = alphaCell{k,2}; % Optimized varibales
    m = alphaCell{k,5}; % Final mass
    tCost = alphaCell{k,4}; % Co[a e i om OM theta]st for the state error
    zEOE = alphaCell{k,3}; % State vector in EOE
    zCOE = zEOE; % Initialize COE state vector
    for i = 1:size(zEOE,2)
        zCOE(:,i) = EOE2COE(zEOE(:,i)); % Conversion of EOE state vector to COE state vector
    end

    % Pareto Front plot
    figure(f1)
    scatter(m0-m,tCost,50,'filled');
    grid on
    hold on
    if k == length(alpha)
        legend(label,"FontSize",14)
        xlabel("Mass Consumed $[kg]$","FontSize",14)
        ylabel("Time Weighted Error","FontSize",14)
        title("Pareto Front","FontSize",18)
    end

    % Plot orbital transfer
    plot2DOrbit(orb_in,orb_end,zCOE,tmax);
    grid on

    % Plot time evolution of classical orbital elements
    figure(f2)
    subplot(3,1,1)
    plot(tPlot,zCOE(1,:));
    hold on
    grid on
    if k == length(alpha)
        ylabel("Semi-major Axis $a$ $[km]$","FontSize",14)
        xlim([0, tPlot(end)])
    end
    subplot(3,1,2)
    plot(tPlot,zCOE(2,:));
    hold on
    grid on
    if k == length(alpha)
        ylabel("Eccentricity $e$ $[\backslash]$","FontSize",14)
        xlim([0, tPlot(end)])
    end
    subplot(3,1,3)
    plot(tPlot,zCOE(5,:));
    grid on
    hold on
    if k == length(alpha)
        legend(label,"FontSize",14,"Position",[8.2924e-01 9.1513e-01 1.6059e-01 5.1677e-02])
        xlabel("Time $[h]$","FontSize",14)
        ylabel("Argument of periapsis $\omega$ $[rad]$","FontSize",14)
        xlim([0, tPlot(end)])
        sgtitle("COE State Time Evolution","FontSize",18)
        f2.Position = [680 42 754 954];
    end


%     figure(f3)
%     csisim = interp1(tNew,x(2:(end+1)/2),t,"pchip");
%     angsim = interp1(tNew,x((end+1)/2+1:end),t,"pchip");
%     subplot(length(alpha),2,2*k-1)
%     plot(tPlot,csisim)
%     hold on
%     grid on
%     subplot(length(alpha),2,2*k)
%     plot(tPlot,mod(angsim,2*pi)*180/pi)
%     hold on
%     grid on
% 
%     figure(f4)
%     plot(tPlot,vecnorm(sqrt(Q)*(zCOE([1 2 5],:)-zCOEbar([1 2 5]))).^2)
%     hold on
%     grid on
    

end

% fig = Orb_Earth_plot(orb_in, orb_end, x, utot);

%% Function to plot planar transfer together with initial and final orbit
function fig = plot2DOrbit(orb_in,orb_end,zCOE,tmax)

fig = figure();
fig.Position = [680   421   827   557];
r = 6378.1;
rectangle("Position",[-r -r 2*r 2*r],"Curvature",1,"FaceColor",[40 122 184]/255)
hold on
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

legend([h(1), pin, pend],["Transfer","Initial Orbit","Final Orbit"], "Position",[4.4800e-02 8.1705e-01 1.8274e-01 1.2962e-01], "FontSize", 14)
xlabel("X-Coordinate $[km]$","FontSize",14)
ylabel("Y-Coordinate $[km]$","FontSize",14)
title(["Orbital Transfer", "Perifocal Reference Frame"],"FontSize",18)
end

function h = ccplot(x,y,c,map)
    % CCPLOT Conditionally colored plot
    % 
    %   h = CCPLOT(X,Y,CONDITION,MAP) plots the vector Y versus vector X 
    %   using conditional coloring. CCPLOT maps each value in vector C to a
    %   certain color of the specified colormap MAP. CCPLOT returns handles
    %   to the line objects that can be used to change properties via
    %   set(...)
    %
    %   Examples:
    %       x = linspace(0,4*pi,50);
    %       y = sin(x);
    %       c = y.^2;
    %       map = colormap(jet);
    %       h = ccplot(x,y,c,map);
    %       set(h,'Marker','o');
    
    %   Copyright 2012 Michael Heidingsfeld
    %   $Revision: 1.0 $  $Date: 2012/08/02 15:33:21 $    
    
    if ~(all(size(x) == size(y)) && all(size(x) == size(c)))
        error('Vectors X,Y and C must be the same size');
    end
    N = size(map,1);
    cmax = max(c);
    cmin = min(c);
    cint = (cmax-cmin)/N;
    indices = 1:length(c);
    status = ishold;                % save hold status
    for k = 1:N
        ii = logical(c >= cmin+k*cint) + logical(c <= cmin+(k-1)*cint);
        jj = ones(size(ii)); jj(1:end-1) = ii(2:end);
        ii = logical(ii .* jj);
        X = x; X(indices(ii)) = NaN;
        Y = y; Y(indices(ii)) = NaN;
        h(k) = plot(X,Y,'Color',map(k,:)); 
        hold on;
    end
    if status == 0, hold off; end   % reset hold status
end

