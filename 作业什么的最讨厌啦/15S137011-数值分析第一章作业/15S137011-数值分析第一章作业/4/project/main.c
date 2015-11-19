#include <stdio.h>
#include <stdlib.h>
#define index 100000000
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
    int i;
    double x3_1=0.55;
    for(i=0;i<=index;i++)
    x3_1-=2*func3(x3_1)/dfunc3(x3_1);
    printf("%f",x3_1);
    return 0;

}
