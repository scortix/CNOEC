close all
clear
clc

% kernel loading
% cspice_furnsh('kernels\gm_de431.tpc');
% cspice_furnsh('sgn_default.tm');

% Data:
x0 = [11359.07 0.7306 0 0.2539676 0 0]';
xf = [42165 0 0 0 0 0]';

x0COE = EOE2COE(x0);
[r0, v0] = paraorb2rv(x0COE(1),x0COE(2),x0COE(3),x0COE(4),x0COE(5),x0COE(6), 398600);
xfCOE = EOE2COE(xf);
[rf, vf] = paraorb2rv(xfCOE(1),xfCOE(2),xfCOE(3),xfCOE(4),xfCOE(5),xfCOE(6), 398600);

r0 = r0'; v0 = v0'; rf = rf'; vf = vf';
% r0=[0 -29597.43 0]';  rf=[0 -29617.43 0]';
% v0=[1.8349 0.0002 3.1783]'; vf=[1.8371 0.0002 3.1755]';
Isp=3000; % [sec]
m0=1e4;   % [kg]
Tmax=1000/1000; % [kg*km/s^2]
g0=9.81/1000; % [km/s^2]
mu=398600;

% zero finding problem.
fval=ones(1,8);

% Initial guess.

load('lambda_guess.mat');

options = optimoptions('fsolve','Display','iter-detailed','MaxFunctionEvaluations',1e4,'MaxIterations',1e3);
l0 = [0.2 1.6 0.65 1600 -29111 15812 0.07 5e3]';

parfor k=1:1
    %while norm(fval(k,:))>1e-6
%         lambda0_tf(:,k)=[0.001*randi([100 1000],1); 0.01*randi([10 200],1); 0.01*randi([10 200],1); 
%             randi([1000 2000],1);  -randi([5000 30000],1); randi([5000 30000],1); 0.0001*randi([100 1000],1);14*3600];
% lambda0_tf=[2.1607e-01; 7.18755e-01; 2.23157e-01; 1.77514e+03; -7.2881e+02; 5.34225e+03; 6.9047e-02; 14*3600];
      [X0(:,k),fval(k,:),exitflag,output] = fsolve(@(lambda0_t) two_body_time_opt(r0,v0,m0,rf,vf,lambda0_t,g0,Isp,Tmax(k),mu)...
            ,l0,options);
    %end
end

% Plot the results of the first Thrust
x_lambda_0=[r0;v0;m0;X0(1:7,1)]; % Initial condition.
t_span=linspace(0, X0(8,1),300); % Intregration time.
% Integration
options = odeset('RelTol',1e-13);
[T,x_lambda1]=ode45(@(t,x_lambda1) two_body_LT_dynamics(t,x_lambda1,g0,Isp,mu,Tmax(1)),t_span,x_lambda_0,options);
mf=x_lambda1(end,7); % Final mass.
alpha=-x_lambda1(:,11:13); % thrust pointing vector not normalized.
for k=1:length(T)
    alpha(k,:)=alpha(k,:)/norm(alpha(k,:));
end
% % Orbit Plot
% low_T=figure();
% Orb_Earth_plot(low_T);
% hold on
% p1=plot3(x_lambda1(:,1),x_lambda1(:,2),x_lambda1(:,3),'Color','#6495ED');
% p2=plot3(r0(1),r0(2),r0(3),'.','color','#00A86B','MarkerSize',18);
% p3=plot3(rf(1),rf(2),rf(3),'.','color','#960018','MarkerSize',18);
% p4=quiver3(x_lambda1(:,1),x_lambda1(:,2),x_lambda1(:,3),alpha(:,1),alpha(:,2),alpha(:,3),'Color',[1 0.46 0.81]);
% title('Low thrust transfer: T=100 mN')
% legend([p1 p2 p3 p4],'Transfer','r_i','r_f','Thrust direction')
% xlabel('x [km]')
% ylabel('y [km]')
% zlabel('z [km]')

% % Same plot to zoom-in the final position
% low_T2=figure();
% Orb_Earth_plot(low_T2);
% hold on
% p1=plot3(x_lambda1(:,1),x_lambda1(:,2),x_lambda1(:,3),'Color','#6495ED');
% p2=plot3(r0(1),r0(2),r0(3),'.','color','#00A86B','MarkerSize',18);
% p3=plot3(rf(1),rf(2),rf(3),'.','color','#960018','MarkerSize',18);
% title('Low thrust transfer: T=100 mN')
% legend([p1 p2 p3],'Transfer','r_i','r_f')
% xlabel('x [km]')
% ylabel('y [km]')
% zlabel('z [km]')

% plot switching function, control action and hamiltonian
% Compute switching fun and the hamiltonian
St=zeros(length(T),1);
H=zeros(length(T),1);
for k=1:length(T)
    St(k)=-Isp*g0/x_lambda1(k,7)*norm(x_lambda1(k,11:13))-x_lambda1(k,end);
    H(k)=1+dot(x_lambda1(k,8:10),x_lambda1(k,4:6))-mu/norm(x_lambda1(k,1:3))^3*dot(x_lambda1(k,1:3),x_lambda1(k,11:13))+Tmax(1)/Isp/g0*St(k);
end
% Control action
u=St<0;

% Plot the switching function.
subplot(1,3,1)
plot(T,St,'Color','#6495ED','LineWidth',1.5)
title('Switching function')
xlabel('Time [sec]')
ylabel('St(t) ')
legend('St')
grid on

% Plot the control action
subplot(1,3,2)
plot(T,u,'Color','#6495ED','LineWidth',1.5)
title('Throttle value')
xlabel('Time [sec]')
ylabel('u(t)')
legend('u')
grid on

% Plot the hamiltonian
subplot(1,3,3)
plot(T,H,'Color','#960018','LineWidth',1.5)
title('Hamiltonian')
xlabel('Time [sec]')
ylabel('H(t)')
legend('H')
ylim([-1 1])
grid on

% % Plot time vs thrust
% figure()
% time_vec=X0(end,:);
% plot(Tmax*1e06,time_vec,'--o','Color','#00A86B')
% title('Time vs thrust')
% ylabel('Time [sec]')
% xlabel('Thrust [mN]')
% legend('Time')
% grid on
