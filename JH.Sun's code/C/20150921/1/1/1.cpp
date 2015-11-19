#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int foo1(int a[])
{
	printf("in foo %ld\n", sizeof(a));
	return 0;
}
int main1(void){

	
	int a[10];
	a[3] = 12;
	printf("%d\n", sizeof(a));
	//foo(a);
	getchar();
	return 0;
}
void init_array(int b[],int num) //b是形参，形参接收实参赋值，b=a，b里面保存了a数组的首地址
{
	int i;
	srand(time(NULL)); //生成随机数种子，rand函数要根据此种子，再来生成随机数
	for (i = 0; i < num; i++)
		b[i] = rand() % 100;
}
void bubble_sort(int a[], int num)
{

}
void show_array(int a[], int num)
{

}
//int main2()
//{
//	int a[10];
//	init_array(a, 10);//a表示数组首地址，实参
//	
//}
int max(int a, int b)
{

	printf("%p\t%p\n", &a, &b);
	return a > b ? a : b;//return返回一个int变量给系统寄存器或者临时内存
}
void main3(void)
{
	char a = 3, b = 5, res;
	printf("%p\t%p\n", &a, &b);
	res = max(a, b);
	printf("%d\n", res);
	getchar();
}
char foo(int num){
	if (num >= 90)
		return 'A';
	if (num >= 80 && num < 90)
		return 'B';
	if (num >= 60 && num < 70)
		return 'C';
	if (num < 60)
		return 'D';
}
void print_item(int num){
	while (num--)
		printf("hello\n");
	return;
}
void main(){

	int num;
	char score;
	while (1)
	{
		scanf_s("%d", &num, sizeof(num));
		score = foo(num);

	}

}