function y1=fun2(x0);
x=x0(1);
y=x0(2);
z=x0(3);
y1=[y, x, -2*z
    y*z-2*x ,x*z+2*y, x*y
    exp(x), -exp(y), 1]