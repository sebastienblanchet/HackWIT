%HackWITUS
%Sebastien Blanchet , Lilyn Gao
%March 25 2017
% Function to read sensor output from arduino

%clear worksapce
clear a
% Define a rudiment
% Define a duration of practice

a = arduino('COM4','uno');
interv = 1000;
passo = 1;
t = 1;
x = 0;
while t<interv
    b = a.readDigitalPin(2);
    x = [x,b];
    plot(x)
    axis([0,interv,0,1.5]);
    grid on
    t = t+passo;
    drawnow;
end

% a.readDigitalPin(2);

