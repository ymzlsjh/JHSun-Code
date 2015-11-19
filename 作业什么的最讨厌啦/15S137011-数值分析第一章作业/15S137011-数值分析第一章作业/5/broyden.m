function ff=broyden(x0);
format long;
x0=x0';
n=100;
eps=0.5e-5;
h0=(fun2(x0))^(-1);
x1=x0-h0*fun1(x0);
r0=x1-x0;
y0=fun1(x1)-fun1(x0);
h1=h0+(r0-h0*y0)*(r0')*h0*inv((r0')*h0*(y0));
k=1;
while k<n&&(norm(x1-x0,inf)>eps)
    x0=x1;
    h0=h1;
    x1=x0-h0*fun1(x0);
    ri=x1-x0;
    yi=fun1(x1)-fun1(x0);
    h1=h0+(ri-h0*yi)*(ri')*h0*inv((ri')*h0*(y0));
    k=k+1;
end
disp('x=');
disp(x1);
disp('n=');
disp(k);