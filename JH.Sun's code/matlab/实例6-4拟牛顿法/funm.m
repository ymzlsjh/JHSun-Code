function y = funm(x)
y(1,1) = x(1,1) - 0.7 * sin(x(1,1)) - 0.2 * cos(x(2,1));
y(2,1) = x(2,1) - 0.7 * cos(x(1,1)) + 0.2 * sin(x(2,1));