#include <stdio.h>
#include<stdlib.h>
#include<math.h>
void main1(void)
{
	char str[] = "hello";
	printf("%p\t%s", str, str);//��ӡ��ַ������

	getchar();
}
void main2(void)
{
	char ch = 'A';
	printf("%c", ch);
	ch += 32;
	printf("%c", ch);
	getchar();
}
void main3(void)
{
	char a = 'a';
	short b =12 ;
	int c = 123;
	long d = 1234;

	double f = 123151;
	long long g = 124156161;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(d));
	printf("%d\n", sizeof(f));
	printf("%d\n", sizeof(g));
	getchar();
	
}
void main4(void){

	float div;
	div = 1 / 2;
	printf("%f\n", div);
	getchar();

}
void main5(void){
	int num=0, i=0, j=0;
	printf("shuru!");
	scanf_s("%d", &num);
	getchar();
	i = num / 10;
	j = num % 10;
	printf("%d %d", i, j);
	num = 10 * j + i;
	printf("%d", num);
	getchar();

}

void main6(void)
{
	int i, j, k; int *a;
	printf("����������ĸ���");
	scanf_s("%d", &i);   //����д\n��scanf����
	a = (int *)malloc(sizeof(int) * i);
	printf("%d����\n", i);
	for (j = 0; j<i; j++)
	{
		printf("���������֣�\n");  //©�˸��ֺ�
		scanf_s("%d", &k);   //����д\n��scanf����
		a[j] = k;
		printf("\n");
	}
}
void main7(void){
	int num;
	scanf_s("%d", &num);
	printf("%d", num);
	getchar();
	system("pause");//imp


}
void main(void){
	double a = 1.0;
	double b = 2.0;
	double c = 3.0;
	double result = 0.0;
	result = a + b + c;
	printf("%f\n", result);
	result = a*a + b*b + c*c;
	printf("%f\n", result);

	result = sqrt(result);
	printf("%f\n", result);
	getchar();


}