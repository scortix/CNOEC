function [J, f, gx, hx, Jf, Jg, Jh, p, q] = costGaussGrad(x,tmax,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha,computeGrad,A,b,C,d)


[f,g,h] = fun(x,tmax,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha);

% lx = length(x);
% lf = 1; lg = size(A,1) + length(g); lh = size(C,1) + length(h);

if ~isempty(A)
    p = size(A,1) + length(g);
else
    p = length(g);
end
if ~isempty(C)
    q = size(C,1) + length(h);
else
    q = length(h);
end

J = [f;g;h];
if computeGrad
    Jac = mygradcalc(@(x)costGaussGrad(x,tmax,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha,false,[],[],[],[]),x, J, 'FD');
    Jf = Jac(:,1);
    Jg = [A', Jac(:,2:length(g)+1)];
    Jh = [C', Jac(:,length(g)+2:end)];
    
    if ~isempty(A)
        gx = [A*x-b;g];
    else
        gx = g;
    end
    if ~isempty(C)
        hx = [C*x-d;h];
    else
        hx = h;
    end
else
    Jf = 0; Jg = 0; Jh = 0;
    if ~isempty(A)
        gx = [A*x-b;g];
    else
        gx = g;
    end
    if ~isempty(C)
        hx = [C*x-d;h];
    else
        hx = h;
    end
end

    function [f,g,h] = fun(x,tmax,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha)
        tf = x(end); theta0 = x(1);
        tmax = tf;
        lu = (length(x)-2)/4;
        csi = x(2:1+lu);
        qdir = reshape(x(2+lu:end-1),3,lu);
        t = 0:Ts:tmax; % Time vector
        indtf = find(t>tf,1,'first')-1;
        x0 = EOE2COE(y0);
        x0(6) = theta0;
        y0 = COE2EOE(x0);
        y = zeros(6,length(t)+1); % Initialization of vector state
        y(:,1) = y0; % Set initial conditions
        m = m0;

        dyinv = abs(y0-ybar);
        for i = 1:length(dyinv)
            dyinv(i) = (dyinv(i) ~= 0)/(dyinv(i)+(dyinv(i)==0));
        end
        Q = diag([1 1 1 1 1 0]'./ybar.^2);
        % R = diag([1 1 1]/umax^2)*0.1;

        for k = 1:length(t)
            ku = ceil(k/ratio);
            u = Tmax/m*csi(ku)*qdir(:,ku)/norm(qdir(:,ku));
            y(:,k+1) = y(:,k) + Ts*EOEDerivatives(t(k),y(:,k),u,398600);
            m = m - Ts*coeffT*csi(ku);
        end
        dm = m0 - m;

        r = ((y(1,:)./(1+sqrt(y(2,:).^2+y(3,:).^2).*cos(y(6,:)-atan2(y(3,:),y(2,:)))))');
        f = alpha*tf/1e5 + (1-alpha)*dm/m0; f = f*1e6;
%         g = [Q(1:5,1:5)*(y(1:5,indtf)-ybar(1:5)).^2;
%             Q(1:5,1:5)*(y(1:5,end)-ybar(1:5)).^2];
        g = Q(1:5,1:5)*(y(1:5,end)-ybar(1:5)).^2;
        h = [min(r)-6378.1; m-1100];

    end
%     function f = funf(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha)
%         [f,~,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha);
%     end
%     function f = fung(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha)
%         [~,g,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha);
%     end
%     function f = funh(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha)
%         [f,~,~] = fun(x,Ts,y0,ybar,m0,coeffT,Tmax,ratio,alpha);
%     end

end