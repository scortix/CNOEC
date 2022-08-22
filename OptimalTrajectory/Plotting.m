%% Vector Initialization and Solution Load
zEOE = zeros(6,length(t)); % State vector initialization
zEOE(:,1) = zEOE0; % Set first state vector equal to initial condition

if ~exist("conCell","var")
    load("simulation.mat","conCell");
end
if ~exist("uncCell","var")
    load("simulation.mat","uncCell");
end

%% Plotting Results
zCOE0 = EOE2COE(zEOE0); % Inital state vector in COE
zCOEbar = EOE2COE(zEOEbar); % Desired state vector in COE
tPlot = t/3600; % Convert time in hour

% Create necessary figure objects
f1 = figure();
f2 = figure();
f3 = figure();

% Label for plots
label = cell(length(alpha)+1,1);
for k = 1:length(alpha)
    label{k} = "$\alpha = " + num2str(alpha(k)) + "$";
end
label{end} = "Reference";

%% Pareto Front Plot
figure(f1)
loglog(m0-cell2mat(conCell(:,5)),cell2mat(conCell(:,4)),'Color',cscheme{3},'LineWidth',1.5,'Marker','o')
hold on
loglog(m0-cell2mat(uncCell(:,5)),cell2mat(uncCell(:,4)),'Color',cscheme{2},'LineWidth',1.5,'Marker','o')
grid on
legend({'Constrained','Unconstrained'},"FontSize",14)
xlabel("Mass Consumed $[kg]$","FontSize",14)
ylabel("Time Weighted Error","FontSize",14)
title("Pareto Front","FontSize",18)

%% Plot State Evolution and Orbit
for sim = 1:2
    if sim == 1
        f = figure(f2);
        clf
        alphaCell = conCell;
        secondLine = "Constrained Optimization";
    else
        f = figure(f3);
        clf
        alphaCell = uncCell;
        secondLine = "Unconstrained Optimization";
    end
    for k = 1:length(alpha)
        figure(f)
        x = alphaCell{k,2}; % Optimized varibales
        m = alphaCell{k,5}; % Final mass
        tCost = alphaCell{k,4}; % Co[a e i om OM theta]st for the state error
        zEOE = alphaCell{k,3}; % State vector in EOE
        zCOE = zEOE; % Initialize COE state vector
        for i = 1:size(zEOE,2)
            zCOE(:,i) = EOE2COE(zEOE(:,i)); % Conversion of EOE state vector to COE state vector
        end
        %Plot time evolution of classical orbital elements

        subplot(2,2,1)
        plot(tPlot,zCOE(1,:),'Color',cscheme{k},'LineWidth',1.5);
        hold on
        grid on
        if k == length(alpha)
            line([0,tmax],orb_end.a*[1,1],'Color','k','LineWidth',1.5,'LineStyle','--')
            ylabel("Semi-major Axis $a$ $[km]$","FontSize",14)
            xlabel("Time $[h]$","FontSize",14)
            xlim([0, tPlot(end)])
        end
        subplot(2,2,2)
        plot(tPlot,zCOE(2,:),'Color',cscheme{k},'LineWidth',1.5);
        hold on
        grid on
        if k == length(alpha)
            line([0,tmax],orb_end.e*[1,1],'Color','k','LineWidth',1.5,'LineStyle','--')
            ylabel("Eccentricity $e$ $[\backslash]$","FontSize",14)
            xlabel("Time $[h]$","FontSize",14)
            xlim([0, tPlot(end)])
        end
        subplot(2,2,3)
        plot(tPlot,zCOE(5,:),'Color',cscheme{k},'LineWidth',1.5);
        grid on
        hold on
        if k == length(alpha)
            line([0,tmax],orb_end.om*[1,1],'Color','k','LineWidth',1.5,'LineStyle','--')
            legend(label,"FontSize",14,"Position",[2.3367e-01   1.2029e-01   2.2410e-01   1.5956e-01],'NumColumns',2)
            xlabel("Time $[h]$","FontSize",14)
            ylabel("Arg of periapsis $\omega$ $[rad]$","FontSize",14)
            yticks(-pi:pi/2:pi)
            yticklabels({'$-\pi$','$-\frac{\pi}{2}$','$0$','$\frac{\pi}{2}$','$\pi$'})
            xlim([0, tPlot(end)])
            ylim([-pi,pi])
            sgtitle({"State - Time Evolution", secondLine},"FontSize",18)
            f.Position = [320 200 1000 600];
        end
        subplot(2,2,4)
        csisim = interp1(tu,x(2:(end+1)/2),t,"makima");
        plot(tPlot,mfun(t,csisim,Ts,Tmax/g0/Isp),'Color',cscheme{k},'LineWidth',1.5);
        hold on
        grid on
        if k == length(alpha)
            xlabel("Time $[h]$","FontSize",14)
            ylabel("Available Mass $[kg]$","FontSize",14)
            xlim([0, tPlot(end)])
        end
        plot2DOrbit(orb_in,orb_end,zCOE,tmax,[strcat("Orbital Transfer - $\alpha=", num2str(alpha(k)), "$" ), secondLine, "Perifocal Reference Frame"]);
%         Orb_Earth_plot(orb_in, orb_end, zCOE); %Uncomment this line to
%         plot the trajectory as a 3D plot
        
    end
end

%%
function m = mfun(t,csi,Ts,coeffT)
m = t;
for i = 1:length(t)
    m(i) = 1000-Ts*sum(coeffT*csi(1:t(i)/Ts+1));
end
end