function [EOE] = IOE2EOE(IOE, s, Re)

EOE = IOE;
rotMat = [cos(IOE(6)) -sin(IOE(6)); sin(IOE(6)) cos(IOE(6))];
EOE(1) = IOE(1)*Re;
EOE(2:3) = rotMat*IOE(2:3);
EOE(4:5) = rotMat*IOE(4:5);
EOE(6) = IOE(6)+s;