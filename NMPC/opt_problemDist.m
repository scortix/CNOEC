function xopt = opt_problemDist(x0,M,Ts,zEOE0,yRef,Q,R,coeffT,mass,Tmax,xp,yp,zp)
opt = myoptimset();
fun = @(x) NMPC_costDist_mex(M,Ts,x,zEOE0,yRef,Q,R,coeffT,mass,Tmax,xp,yp,zp);
xopt = mySQP(fun,x0,[],[],[],[],0,1+M,opt);
end