
#include<stdio.h>
#include<math.h>
float function1(float a){

return sin(a)-(a*a)/2;
}
float dichotomy_Function(float a,float b)//提前判定好function1(a)*(b)是异号的
{
    float x=0.0;
    if(b-a>=0.000005){
        x=(a+b)/2;
       // printf("a=%f b=%f x=%f\n",a,b,x);
        if(function1(a)*function1(x)<=0){
            b=x;

        }

        else {
            a=x;

        }
    dichotomy_Function(a,b);

    }
else
    return (a+b)/2;

}

int main()
{

    //x=function1(a);

    printf("%f",dichotomy_Function(1,2));

    return 0;
}
