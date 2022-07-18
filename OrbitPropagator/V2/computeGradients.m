function [gradfx, gradgx, gradhx, gradlx, gradFx] = computeGradients_UserDefined(x)
gradfx = [zeros(1,length(x)); 1];
gradgx = 