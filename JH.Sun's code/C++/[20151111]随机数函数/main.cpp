#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    //126.605112, 45.719209
    freopen("output.txt","w",stdout);
 int i=705000,j,k=126,l=45,m=740000;
// randomize();//初始化随机数发生器
 for(j=1;j<11;j++)
 {
 (unsigned)time( NULL ) ;//以i为种子，因为rand()必须的有种子一般都用时间为种子
       //如：srand( (unsigned)time( NULL ) );但是时间为种子有时随机数是相同的
    i+=rand()%10000;
    m+=rand()%10000;
    printf("\n var  epoi%d = new BMap.Point(%d.%d,%d.%d);  //终点%d",j,k,i,l,m,j);
 }
  return 0;
 }
