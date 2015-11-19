#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void main1(void){
	char ch = 'a';
	char* q;
	q = &ch;
	printf("%d", sizeof(q));//4,32位地址就是4个字节，所以是4
	getchar();
	return; 
}
int main2(void)
{
	int i = 3;
	int *p;
	p = &i;
	i = 4;
	printf("&i=%p\n",&i);
	printf("%p\t%d\n", p, *p);
	getchar();
	return 0;
}
void init_array(int *arr, int n)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		arr[i] = rand() % 10;
}
void show_array(int arr[], int n){
	int i;
	for (i = 0; i < n;i++)
	{
		printf("%d\n", &arr[i]);
	}
}
int main3(void)
{
	char str[] = "helloworld";
	printf("sizeof(str)=%d \n strlen(str)=%d\n %s\n", sizeof(str), strlen(str), str);

	printf("***********\n");
	char *p = str;
	while (*p != '\0')
	{
		putchar(*p);
		p++;
	}
	getchar();
	return 0;
}
void change_str(char *s)
{
	printf("sizeof(s)=%d,strlen(s)=%d\n", sizeof(s), strlen(s));//测指针大小，测字符串长度
	*(s+3) = '\0';
}
void main(void){
	char str[10] = "hello";
	change_str(str);
	getchar();
	return ;
}


