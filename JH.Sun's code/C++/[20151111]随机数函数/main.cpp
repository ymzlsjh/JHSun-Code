#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    //126.605112, 45.719209
    freopen("output.txt","w",stdout);
 int i=705000,j,k=126,l=45,m=740000;
// randomize();//��ʼ�������������
 for(j=1;j<11;j++)
 {
 (unsigned)time( NULL ) ;//��iΪ���ӣ���Ϊrand()�����������һ�㶼��ʱ��Ϊ����
       //�磺srand( (unsigned)time( NULL ) );����ʱ��Ϊ������ʱ���������ͬ��
    i+=rand()%10000;
    m+=rand()%10000;
    printf("\n var  epoi%d = new BMap.Point(%d.%d,%d.%d);  //�յ�%d",j,k,i,l,m,j);
 }
  return 0;
 }
