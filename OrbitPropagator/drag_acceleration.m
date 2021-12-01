function [ad] = drag_acceleration(rho, va, area, m, Cd)
ad = Cd*area/2/m*rho*va^2;
end