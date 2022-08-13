function xopt = opt_problem(x0,M,Ts,zEOE0,yRef,Q,R,coeffT,mass,Tmax)
opt = myoptimset();
fun = @(x) NMPC_cost_mex(M,Ts,x,zEOE0,yRef,Q,R,coeffT,mass,Tmax);
xopt = mySQP(fun,x0,[],[],[],[],0,1+M,opt);
end