function K = place2(A,B,P)


% Special case: (#inputs)==(#states) - efficient, but not clean

[Bu,Bs,Bv] = svd(B);
ns = size(A,1)
svB = diag(Bs(1:ns,1:ns))
m = sum(svB > 100*eps*svB(1))

As = A - diag(real(P));

K = diag(1./svB(1:m))*Bu(:,1:m)'*As;

K = Bv(:,1:m) * K;
