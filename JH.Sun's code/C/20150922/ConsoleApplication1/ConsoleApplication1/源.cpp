#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void init_array(int b[], int num)
{
	int i;
	srand((unsigned int)time(NULL));
	for (i = 0; i < num; i++)
		b[i] = rand() % 100;
}
int main(void)
{
	int a[10] = { 0 };
	init_array(a, 10);
	return 0;
}