function opt = myoptimset()
opt = struct;
opt.tolgrad = 1e-8;
opt.tolx = 1e-8;
opt.tolf = 1e-8;
% opt.tolf = 1e-2;
opt.tolconstr = 1e-8;
% opt.nitermax = 1000;
opt.nitermax = 500;
opt.method = 'Gauss-Newton';
opt.lstkmax = 1;
opt.lsbeta = 0.8;
opt.lsc = 0.1;
opt.lsnitermax = 5e3;
opt.gamma = 0.4;
opt.gradmethod = 'FD';
end