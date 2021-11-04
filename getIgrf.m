count = 1;
for n = 1:13
    IGRF(n,1,1) = IGRF10(count);
    count = count + 1;
    for m = 2:n+1
        IGRF(n,m,:) = [IGRF10(count), IGRF10(count+1)];
        count = count + 2;
    end
end