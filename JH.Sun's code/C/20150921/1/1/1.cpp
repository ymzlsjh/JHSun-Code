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
void init_array(int b[],int num) //b���βΣ��βν���ʵ�θ�ֵ��b=a��b���汣����a������׵�ַ
{
	int i;
	srand(time(NULL)); //������������ӣ�rand����Ҫ���ݴ����ӣ��������������
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
//	init_array(a, 10);//a��ʾ�����׵�ַ��ʵ��
//	
//}
int max(int a, int b)
{

	printf("%p\t%p\n", &a, &b);
	return a > b ? a : b;//return����һ��int������ϵͳ�Ĵ���������ʱ�ڴ�
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