#include <stdio.h>
#include<math.h>
#define e 2.71828
#define index 100
double func(double a){
return a*pow(e,a)-1;
}
int main()
{
    int i=0;
    double a=0.4,b=0.6,c;

    for(;i<=100;i++){
        c=b-func(b)/(func(b)-func(a))*(b-a);
        a=b;
        b=c;
        if(b-a<0.5E-5)
            break;
    }
    printf("%f",c);
    return 0;
}
