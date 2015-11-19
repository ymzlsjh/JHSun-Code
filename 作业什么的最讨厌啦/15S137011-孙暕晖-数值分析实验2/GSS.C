#include <stdio.h>
#include <stdlib.h>
#define Column 4
#define Line 3
double x1[3];
void Gss(double arr[][4],double x[])
{
    int k=0,i=0,j=0;
    for(k=0;k<Line-1;k++)
    {
        for(i=k+1;i<Line;i++)
        {
            for(j=k+1;j<Column;j++)
            {
                arr[i][j]+=-arr[i][k]*arr[k][j]/arr[k][k];
            }
        }
    }
    for(i=2;i>=0;i--)
    {
        double temp=arr[i][3];
        int times=2;
        while(i<2&&times>i)
        {
            temp-=x[times]*arr[i][times];times--;
        }
        x[i]=temp/arr[i][i];
    }
    for(i=0;i<Line;i++)
        printf("x[%d]=%lf\n",i,x[i]);
}




int main(){
    freopen("GSS.txt","w",stdout);
    int i;
  double arr1[Line][Column]={1E-10,2,3,1,-1,3.712,4.623,2,-2,1.072,5.643,3};
    double arr2[Line][Column]={4,-2,4,10,-2,17,10,3,-4,10,9,7};
double ans[Column]={0};
    printf("1:\n");
    printf("\t高斯消去法第一题\n");
    Gss(arr1,ans);

    printf("2:\n");
    printf("\t高斯消去法第二题\n");
    Gss(arr2,ans);


    return 0;
}


