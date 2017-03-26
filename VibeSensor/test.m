a = serial('COM4')
set(a,'BaudRate',9600)
fopen(a)

timeDuration = seconds(sec);
interv = sec*30;

timeNow = now;
timeEnd = timeNow + timeDuration;

x = 0;

%setup while loop for real time plotting

while now<timeEnd
    %set b as current point being read
    % ~ inverts 1 to 0
    b = a.readVoltage(0);
    %plot it with previously acquired data
    x = [x,b];
    plot(x)
    axis([0,interv,0,6]);
    grid on
    drawnow;
end

fclose(a)