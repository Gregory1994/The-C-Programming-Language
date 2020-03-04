#include <stdio.h>
#include <stdlib.h>

/*  invert 函数：将x中从第p位开始的n位求反
    默认 p > n 
*/
 
int invert(int x, int p, int n)
{
    int ans, mask;
    mask = ~((~0 << p) | ~(~0 << (p - n))); // 生成屏蔽码
    ans = (x | mask) & (~x | ~mask); 
    // 用屏蔽码将x中对应位数屏蔽为1，将y中其他位屏蔽为1
    return ans;
}
 
int main()
{
    int x, p, n;
    char x_str[50], ans_str[50];
    int ans;

    x = 0b10001;
    p = 4;
    n = 3;
    ans = invert(x, p, n);

    itoa(x, x_str, 2);
    itoa(ans, ans_str, 2);

    printf("x = %s\np = %d\nn = %d\n", x_str, p, n);
    printf("%s\n", ans_str);

    system("pause");
    return 0;
}
