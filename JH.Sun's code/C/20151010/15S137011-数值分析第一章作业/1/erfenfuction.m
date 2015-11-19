run('myfunction1.m')
function y=erfenfuction(a,b,M)
k=0;x=0;
eps=0.000005;
while b-a>eps
    x=(a+b)/2;
    if myfunction1(a)*myfunction1(x)<0
        b=(a+x)/2;

    
