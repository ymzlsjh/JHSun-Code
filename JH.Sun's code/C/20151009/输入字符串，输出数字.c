//�����ַ������������
//��float������Ϊdouble
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int i=0,j=0,digit=0;//ѭ������,digit��λ����j���С����λ��
    char c;
    int sign=1;//����λ
    float figure;//���
    char arr1[MAX]={0};
    while((c=getchar())!=EOF)
    {
         arr1[digit++]=c;
    }
    printf("digit=%d\n",digit);
    for(j=0;j<digit;j++)
        if(arr1[j]=='.')
            break;
        printf("j=%d\n",j);
    for(i=0;i<digit;i++)
        printf("%c",arr1[i]);
        printf("\n");
    if(arr1[0]=='-')
       {
        figure=0.0;
         sign=-1;
        for(i=1;i<j;i++)
        {
            figure+=(arr1[i]-'0')*pow(10,j-i-1);
            printf("arr1[%d]=%d,figure=%.15f\n",i,(arr1[i]-'0'),figure);
        }
        for(i=j+1;i<digit;i++)
        {
            figure+=(arr1[i]-'0')*pow(10,j-i);
            printf("arr1[%d]=%d,figure=%.15f\n",i,(arr1[i]-'0'),figure);
        }
        figure*=sign;
        printf("figure=%.15f\n",figure);
       }
    else
    {
        figure=0.0;
        sign=1;
        for(i=0;i<j;i++)
        {
            figure+=(arr1[i]-'0')*pow(10,j-i-1);
            printf("arr1[%d]=%d,figure=%f\n",i,(arr1[i]-'0'),figure);
        }
        for(i=j+1;i<digit;i++)
        {
            figure+=(arr1[i]-'0')*pow(10,j-i-1);
            printf("arr1[%d]=%d,figure=%f\n",i,(arr1[i]-'0'),figure);
        }
        printf("final figure=%f",figure);
    }

    return 0;
}
