function xopt = opt_problem(x0,M,Ts,zEOE0,yRef,Q,R,coeffT,mass,Tmax)

%   OPT_PROBLEM function to execute the NMPC in simulink declaring this
%   function as extrinsic

opt = myoptimset();
fun = @(x) NMPC_cost_mex(M,Ts,x,zEOE0,yRef,Q,R,coeffT,mass,Tmax);
xopt = mySQP(fun,x0,[],[],[],[],0,1+M,opt);
end