function [yref, uref] = trajectoryForNMPC(Ts, M, y0, u0, time)

% Ts    Sampling time 
% M     Prediction horizon
% y0    Reference trajectory
% time  Clock time

% trajectory initialization
yref = zeros(6,M);
uref = zeros(3,M);
k    = ceil(time/Ts);  % o floor, non ne sono sicuro % elapsed time instants
t = length(y0)-k; % remaining points of the trajectory
d = y0(end,end)-y0(end,end-1); % last L difference

if t >= M
    yref = y0(:,k+1:k+M);
    uref = u0(:,k+1:k+M);
elseif t < M && t > 0
    yref(:,1:t) = y0(:,k+1:k+t);
    uref(:,1:t) = u0(:,k+1:k+t);

    yref(1:5,t+1:M) = y0(1:5,end)*ones(1,M-t);
    yref(6,t+1:M) = y0(end,end)+d*[1:M-t];
    uref(:,t+1:M) = zeros(3,1:M-t);
else
    uref = zeros(3,M);
    yref(1:5,:) = y0(1:5,end)*ones(1,M);
    yref(6,:) = y0(end,end)+d*([1:M]-t);
end
