#include <stdio.h>

/* 统计各个数字、空白符及其他字符出现的次数 */

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10]; // ndigit 保存各个数字出现的次数

    nwhite = nother = 0; // nwhite 保存空白符出现的次数，nother保存其他字符出现次数
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("ndigit =");
    for (i = 0; i < 10; ++i){
        printf(" %d", ndigit[i]);
    }
    printf("\nwhite space = %d\nother digit = %d", nwhite, nother);
    getchar();
}