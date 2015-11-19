#include<stdio.h>
#define OX 5
#define TIMES 10
void main(void)
{
	/*const int a = 3;
	int a = 0;
	a = OX;
	printf("a=%d", a);
	*/
	
	/*int result = 0;
	int i;
	for (i = 0; i < TIMES; i++)
	{
		result += i;
		printf("res=%d\n", result);
	}*/
	
	/*const int a = 3; 
	int b = a;
	printf("a=%d\t", a);*/

	int a = 10;
	char b = 'x';
	short c = 3;
	float d = 3.14;
	double e = 6.12345;
	int num;
	num = sizeof(a);
	printf("%d\n", num);//4,a这个变量占4个字节
	num = sizeof(b);
	printf("%d\n", num);
	num = sizeof(c);
	printf("%d\n", num);
	num = sizeof(d);
	printf("%d\n", num);
	num = sizeof(e);
	printf("%d\n", num);

	/*int *a ;
	*a = 10;
	printf("%p",a);*/
	getchar();
}