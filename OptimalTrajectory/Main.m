close all
clear
clc

set(groot,'defaulttextinterpreter','latex');
set(groot,'defaultAxesTickLabelInterpreter','latex');
set(groot,'defaultLegendInterpreter','latex');
Parameters % Load Parameters
onlyPlot = true; % Boolean to skip the optimization part and just plot pre-saved results
%%
if ~onlyPlot
    pool = gcp("nocreate");
    if isempty(gcp)
        parpool;
    end
    %% Compute Initial Guesses for Optimizations
    opt.nitermax = 1e2; %Reduce maximum number of iterations

    % Set x0
    theta0 = 0; % True anomaly for starting the transfer - Initial Guess
    csi = 0.5*ones(lu,1); % Throttle
    ang = pi/2*ones(lu,1); % Direction Angle for the Thrust
    x0 = [theta0;
        csi;
        ang]; % Optimization Vector Initial Guess

    initGuess = cell(length(alpha),5); % Cell array to save all computed solutions

    for k = 1:length(alpha)
        fun = @(x) costFunUnc_mex(x, Ts, tmax, zEOE0, zEOEbar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k)); % Cost Function Definition

        % Optimization
        x = myfminunc(fun,x0,opt);

        % Call the cost function to compute the single terms of the final cost
        % and the state vector
        [~,zEOE,tCost,m] = costFunUnc_mex(x, Ts, tmax, zEOE0, zEOEbar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k));
        initGuess(k,:) = {alpha(k),x,zEOE,tCost,m}; % Save results in the cell array
    end
    save("simulation.mat","initGuess");

    %% Unconstrained Optimization
    opt.nitermax = 1e4;
    if ~exist("initGuess","var")
        load("simulation.mat","initGuess");
    end

    uncCell = cell(length(alpha),5); % Cell array to save all computed solutions
    for k = 1:length(alpha)
        x0 = initGuess{k,2};
        fun = @(x) costFunUnc_mex(x, Ts, tmax, zEOE0, zEOEbar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k)); % Cost Function Definition

        % Optimization
        x = myfminunc(fun,x0,opt);

        % Call the cost function to compute the single terms of the final cost
        % and the state vector
        [~,zEOE,tCost,m] = costFunUnc_mex(x, Ts, tmax, zEOE0, zEOEbar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k));
        uncCell(k,:) = {alpha(k),x,zEOE,tCost,m}; % Save results in the cell array
    end
    save("simulation.mat","uncCell","-append")

    %% Constrained Optimization
    if ~exist("initGuess","var")
        load("simulation.mat","initGuess");
    end

    conCell = cell(length(alpha),5); % Cell array to save all computed solutions
    % Inequality Constraints Definition
    C = [zeros(lu,1) eye(lu) zeros(lu);
        zeros(lu,1) -eye(lu) zeros(lu)];
    d = [zeros(lu,1);
        -ones(lu,1)];
%%
    for k = length(alpha):-1:2
        x0 = initGuess{k,2};
        fun = @(x) costFun_mex(x, Ts, tmax, zEOE0, zEOEbar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k)); % Cost Function Definition

        % Optimization
        x = mySQP(fun,x0,[],[],C,d,0,1+1+0*length(t),opt);

        % Call the cost function to compute the single terms of the final cost
        % and the state vector
        [~,zEOE,tCost,m] = costFun_mex(x, Ts, tmax, zEOE0, zEOEbar, ratio, Tmax, Tmax/g0/Isp, m0, alpha(k));
        conCell(k,:) = {alpha(k),x,zEOE,tCost,m}; % Save results in the cell array
    end
    save("simulation.mat","conCell","-append")
    %%
end

%% Plotting Results
Plotting
