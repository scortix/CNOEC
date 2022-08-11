function xopt = opt_problem(x0,M,Ts,zEOE0,yRef,Q,R,coeffT,mass,Tmax)
opt = myoptimset();
fun = @(x) NMPC_cost_mex(M,Ts,x,zEOE0,yRef,Q,R,coeffT,mass,Tmax);
xopt = mySQP(fun,x0,[],[], ...
    [eye(M) zeros(M,2*M); -eye(M) zeros(M,2*M)],[zeros(M,1); -ones(M,1)] ...
    ,0,1,opt);
end