#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *lianjie(char *char1, char *char2)
{
	int m, n, i, j;
	m = strlen(char1);
	n = strlen(char2);
	for (i = m, j = 0; j <= n + 1; i++, j++)
	{
		char1[i] = char2[j];
	}
	return char1;

}
char* intToRoman(int num) {
	char c1[10][5] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
	char c2[10][5] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
	char c3[10][5] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
	char c4[4][4] = { "", "M", "MM", "MMM" };
	int n, i = 0, j;
	int aa;
	if (num<10)
	{
		n = 1;
	}
	else if (num<100)
	{
		n = 2;
	}
	else if (num<1000)
	{
		n = 3;
	}
	else n = 4;
	char roman[100] = { "" };
	int fenjie[5];
	while (num>0)
	{
		aa = (num % 10);
		num = num / 10;
		fenjie[i] = aa;
		i++;
	}
	j = n - 1;
	while (j >= 0)
	{
		if (j == 3)
		{
			strcat(roman, c4[fenjie[j]]);
		}
		else if (j == 2)
		{
			strcat(roman, c3[fenjie[j]]);
		}
		else if (j == 1)
		{
			strcat(roman, c2[fenjie[j]]);
		}
		else
		{
			strcat(roman, c1[fenjie[j]]);
		}
		j--;
	}
	return roman;
}


int main()
{

	int num = 1;
	char *aa = (char *)malloc(sizeof(char));
	aa = intToRoman(num);
	printf("%s", aa);

	return 0;
}
