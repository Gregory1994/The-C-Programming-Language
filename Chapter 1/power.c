#include <stdio.h>

int power(int m, int n); // 函数声明，也可写为 int power(int, int);

/* 测试power函数 */

int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%3d %5d %6d\n", i, power(2, i), power(-3, i));
    getchar();
    return 0;
}

/* power函数：求底数的n次幂；其中n >= 0 */
int power(int base, int n)
{
    int i, p = 1;

    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}