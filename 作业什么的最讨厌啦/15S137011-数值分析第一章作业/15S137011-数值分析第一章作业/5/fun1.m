function f=fun1(x0);
x=x0(1);
y=x0(2);
z=x0(3);
f=[x*y-z^2-1;x*y*z+y^2-x^2-2;exp(x)+z-exp(y)-3];
