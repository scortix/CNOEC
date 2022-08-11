function opt = myoptimset()
opt = struct;
opt.tolgrad = 1e-6;
opt.tolx = 1e-12;
opt.tolf = 1e-14;
% opt.tolf = 1e-2;
opt.tolconstr = 1e-2;
% opt.nitermax = 1000;
opt.nitermax = 50;
opt.method = 'BFGS';
opt.lstkmax = 1;
opt.lsbeta = 0.8;
opt.lsc = 0.4;
opt.lsnitermax = 5e3;
opt.gamma = 0.4;
opt.gradmethod = 'FD';
end