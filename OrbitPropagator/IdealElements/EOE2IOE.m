function [IOE] = EOE2IOE(EOE, s, Re)

IOE = EOE;
IOE(6) = EOE(6)-s;
rotMat = [cos(IOE(6)) sin(IOE(6)); -sin(IOE(6)) cos(IOE(6))];
IOE(1) = EOE(1)/Re;
IOE(2:3) = rotMat*EOE(2:3);
IOE(4:5) = rotMat*EOE(4:5);
