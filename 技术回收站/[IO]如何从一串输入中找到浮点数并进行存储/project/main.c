#include<stdio.h>
 int main()
 {
     freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
     int i=0,j=0,k=0;
     int weishu=0;
     int count=0;//��������ʾÿ��int��λ��
     char *arr;
     int *ans;
     char tmp[10][10]={0};
     arr=(char*)malloc(sizeof(char)*100);

     ans=(int*)malloc(sizeof(int)*10);
     char c;
     c=getchar();
     printf("c=%c\n",c);
    while(c!='}'){
         //printf("arr[%d]=%c\n",i,arr[i]);
        arr[i]=c;
        c=getchar();
        i++;
    }
    index=i;//arr[index];
    i=0;
    while(arr[i]!='{')
        i++;
    //i����λ��Ϊ��{����
    while(arr[i]!=' ')
        tmp[0][count++]=arr[i++];
    for(;count!=-1;count--)
        ans[0]+=1E(count)*(tmp[0][count]);
        count=0;
    //i��λ��Ϊ��һ����������
    for(j=i+1;j<index;j++)
    {
        if(arr[j]!=' '){
            tmp[k+1][count++]=arr[j];
        }
        else{
            j++;//����������
            k++;//��¼��һ������
        }
    }
    //k��¼һ�����˶��ٸ���
    for(i=1;i<k;i++){//��1��ʼѭ����0λ�Ѿ�����
        count=strlen(tmp[i]);
    }

    //printf("%d\n",i);


    free(arr);
     return 0;
 }
