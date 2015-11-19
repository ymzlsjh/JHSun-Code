#include<stdio.h>
#include<string.h>

int main(){

char str[]="abcdefg";
char *p=str;
char *key_point;
while(p){
    while(key_point=strsep(&p,"cd"))
    {
        if(*key_point==0)
            continue;
        else
            break;
    }
    printf("%s\n",key_point);
}
return 0;}
