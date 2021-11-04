countg = 1; counth = 1;
clear Sch
for i = 1:length(IGRF13coeffs.cossin)
    if IGRF13coeffs.cossin(i) == 'g'
        Sch.gn(countg) = IGRF13coeffs.degree(i);
        Sch.gm(countg) = IGRF13coeffs.order(i);
        Sch.gvali(countg) = IGRF13coeffs.IGRF9(i);
        Sch.gsvi(countg) = IGRF13coeffs.SV(i);
        countg = countg + 1;
        if Sch.gm(end) == 0
            Sch.gn(end)
            Sch.hn(counth) = Sch.gn(end);
            Sch.hm(counth) = 0;
            Sch.hvali(counth) = 0;
            Sch.hsvi(counth) = 0;
            counth = counth + 1;
        end
    else
        Sch.hn(counth) = IGRF13coeffs.degree(i);
        Sch.hm(counth) = IGRF13coeffs.order(i);
        Sch.hvali(counth) = IGRF13coeffs.IGRF9(i);
        Sch.hsvi(counth) = IGRF13coeffs.SV(i);
        counth = counth + 1;
    end
end