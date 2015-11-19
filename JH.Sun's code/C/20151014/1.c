#include<stdio.h>
 int main()
 {
     freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
     int i=0,j=0;
     char *arr;
     arr=(char*)malloc(sizeof(char)*100);
     char c;
     c=getchar();
     printf("c=%c\n",c);
    while(c!='}'){
         printf("arr[%d]=%c\n",i,arr[i]);
        arr[i]=c;
        c=getchar();
        i++;
    }
    printf("%d\n",i);
    while(j!=i)
        printf("%c",arr[j++]);
    free(arr);
     return 0;
 }
