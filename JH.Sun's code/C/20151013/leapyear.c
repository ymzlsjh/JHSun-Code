#include<stdio.h>
#include<stdlib.h>
void leapyear(int year)
{
    if(year%400==0||(year%4==0&&year%100!=0))
        printf("%d is a leap year.\n",year);
        else
            printf("%d is not a leap year.\n",year);
}
int main()
{
    freopen("output.txt","w",stdout);
    int i=0;
    for(i=1900;i<2100;i++)
        leapyear(i);
    return 0;
}
