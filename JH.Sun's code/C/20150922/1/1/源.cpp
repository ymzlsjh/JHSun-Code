#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 10
struct ITEM{
	int a[10];
};
void main1(void)
{
	int a[3] = { 1, 2, 3 };
	printf("&a[0]=%p\ta=%p\t&a=%p\n", &a[0], a, &a);
	printf("&a[0]+1=%p\ta+1=%p\t&a+1=%p\n", &a[0] + 1, a + 1, &a + 1);
	getchar();
}
void init_array(int b[], int num)
{
	int i;
	srand((unsigned int)time(NULL));
	for (i = 0; i < num; i++)
		b[i] = rand() % 100;
}
void simple_show_array(int a[], int n){
	int i = 0;
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	putchar('\n');
}
void select_sort1_vimp(int a[], int n){
	int i, min, j,tmp=0;
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
			if (a[min] > a[j])
				min = j;
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
}
void select_sort2(int a[], int n){
	int i,min,j=0;
	for (i = 0; i <n; i++)
	{
		min = a[i];
		for (j = i + 1; j < n; j++)
			if (min>a[j]){
				min = a[j];
				a[j] = a[i];
				a[i] = min;
			}

	}
}
void main2(void){
	int i = 0;
	int a[NUM] = { 0 };
	scanf_s("%d", &a[0]);
	//show_array(a, NUM);
	if (a[0] > 5)
		printf("helloworld\n");
	system("pause");
	getchar();
}
void copy_array_for(int arr1[], int arr2[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		arr1[i] = arr2[i];
}
void copy_array_while(int arr1[], int arr2[], int n)
{
	int i;
	i = 0;
	while (i < n)
	{
		arr1[i] = arr2[i];
		i++;
	}
}
void copy_array_DoWhile(int arr1[], int arr2[], int n)
{
	int i=0;
	if (n <= 0)
		return;
	do
	{
		arr1[i] = arr2[i];
		i++;
	} while (i < n);
}
int main3()
{
	int i, a[10];
	for (i = 0; i <= 9; i++)
		a[i] = i;
	for (i = 9; i >= 0; i--)
		printf("%d\n", a[i]);
	getchar();
	return 0;

}
void main4(void)
{
	int i;
	int a[NUM] = { 1, 2, 3, 4, 5, 6 };
	int b[NUM];
	copy_array_DoWhile(b, a, 0);
	//show_array(b, NUM);

	system("pause");
}
void main_结构体赋值(void)
{
	int i = 0;
	struct ITEM tmp1 = { 1, 2, 3, 4, 5, 6, 7 };
	struct ITEM	 tmp2;
	tmp2 = tmp1;
	for (i = 0; i < 10; i++)
		printf("%d\t", tmp2.a[i]);
	getchar();
	 
}
int main5(void)
{
	int a[2][5];
	int i, j = 0;
	for (i=0; i < 2; i++)
		for (; j < 5; j++)
		{
			printf("%d", a[i][j]);
			putchar('\n');
		}

	return 0;
}
void main(void){
	int a[7] = {0};
	init_array(a, 7);
	simple_show_array(a, 7);
	select_sort1_vimp(a, 7);
	simple_show_array(a, 7);
	
	//select_sort2(a, 7);
	//simple_show_array(a, 7);
	getchar();

}

