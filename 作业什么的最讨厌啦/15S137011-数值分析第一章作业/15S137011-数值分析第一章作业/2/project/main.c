#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define e 2.718282
#define index 1000000
double func1(double a)
{
    return pow(e,a)*a-1;
}
double dfunc1(double a)
{
    return (a+1)*pow(e,a);
}
double func2(double a)
{
    return pow(a,3)-a-1;
}
double dfunc2(double a)
{
    return 3*pow(a,2)-1;
}
double func3(double a)
{
    return pow(a-1,2)*(2*a-1);
}
double dfunc3(double a)
{
    return 2*pow(a-1,2)+2*(a-1)*(2*a-1);
}
int main()
{
   int i;//—≠ª∑±‰¡ø
   double x1=0.5,x2=1,x3_1=0.45,x3_2=0.65;
   for(i=0;i<=index;i++){
       x1-=func1(x1)/dfunc1(x1);
       x2-=func2(x2)/dfunc2(x2);
       x3_1-=func3(x3_1)/dfunc3(x3_1);
       x3_2-=func3(x3_2)/dfunc3(x3_2);
   }
       printf("1. %f\n2. %f\n3. %f\n%f\n",x1,x2,x3_1,x3_2);
    return 0;
}
