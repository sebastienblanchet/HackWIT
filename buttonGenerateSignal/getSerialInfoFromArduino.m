%HackWITUS
%Sebastien Blanchet , Lilyn Gao
%March 25 2017
% Function to read sensor output from arduino

%clear worksapce
clear 
clc

sec = 10;

a = arduino('COM4','uno');
% Define a rudiment
% Define a duration of practice
% estimate 30 points per second
timeDuration = seconds(sec);
interv = sec*30;

timeNow = now;
timeEnd = timeNow + timeDuration;

x = 0;

%setup while loop for real time plotting

while now<timeEnd
    %set b as current point being read
    b = a.readDigitalPin(2);
    %plot it with previously acquired data
    x = [x,b];
    plot(x)
    axis([0,interv,0,1.5]);
    grid on
    drawnow;
end



