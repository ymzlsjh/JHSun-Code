
#include<stdio.h>
#include<math.h>
float function1(float a){

return sin(a)-(a*a)/2;
}
float dichotomy_Function(float a,float b)//��ǰ�ж���function1(a)*(b)����ŵ�
{
    float x=0.0;
    x=(a+b)/2;
    if(function1(a)*function1(x)<=0)b=x;
    else a=x;
    if(b-a<0.1){
          return x;
    }

    else return dichotomy_Function(a,b);
}

int main()
{

    printf("%f",dichotomy_Function(1,2));

    return 0;
}



