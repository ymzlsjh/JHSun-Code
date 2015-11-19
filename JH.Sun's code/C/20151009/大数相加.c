#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/************************************************************************/
/* 功能：实现两个超大数相加
/* 参数：source1 -- 被加数，字符型数组,如12
/*       source2 -- 加数，字符型数组,
/*       result  -- 存放和，字符型数组
/************************************************************************/
void Add(char *source1, char *source2, char *result)
{
    int len1 = strlen(source1);
    int len2 = strlen(source2);
    int len = len1 >= len2 ? len1 : len2;
    int i = len1 - 1, j = len2 - 1, k = 0;
    char *temp = (char *)malloc(sizeof(char) * (len + 2));
    char x, y, z;
    int carryBit = 0;

    while (i >= 0 || j >= 0)
    {
        if (i < 0) x = '0';
        else x = source1[i];

        if (j < 0) y = '0';
        else y = source2[j];

        z = x + y - '0' - '0' + carryBit;
        temp[k++] = z % 10 + '0';
        carryBit = z / 10;

        i--;
        j--;
    }

    while (carryBit)
    {
        temp[k++] = carryBit % 10 + '0';
        carryBit /= 10;
    }

    for (--k, i = 0; k >= 0; k--, i++)
    {
        result[i] = temp[k];
    }
    result[i] = '\0';

    free(temp);// 释放内存
}

int main()
{
    char source1[1000];
    char source2[1000];
    char result[1100];

    scanf("%s%s", source1, source2);
    Add(source1, source2, result);

    printf("%s\n", result);
    return 0;
}
