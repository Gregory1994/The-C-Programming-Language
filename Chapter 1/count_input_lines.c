#include <stdio.h>

/* 统计输入的行数 */
int main()
{
    int c, n1;
    while ((c = getchar()) != EOF)
        if (c == '\n') // 单引号中的字符表示一个整数值；
                       // 而双引号中的字符表示字符串。
            ++n1;
    printf("%d", n1);
}