#include<stdio.h>
 int main()
 {
     freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
     int i=0,j=0,k=0;
     int weishu=0;
     int count=0;//计数器表示每个int的位数
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
    //i所在位置为‘{’；
    while(arr[i]!=' ')
        tmp[0][count++]=arr[i++];
    for(;count!=-1;count--)
        ans[0]+=1E(count)*(tmp[0][count]);
        count=0;
    //i的位置为第一个‘，’；
    for(j=i+1;j<index;j++)
    {
        if(arr[j]!=' '){
            tmp[k+1][count++]=arr[j];
        }
        else{
            j++;//跳过‘，’
            k++;//记录下一个数；
        }
    }
    //k记录一共存了多少个数
    for(i=1;i<k;i++){//从1开始循环，0位已经处理
        count=strlen(tmp[i]);
    }

    //printf("%d\n",i);


    free(arr);
     return 0;
 }
