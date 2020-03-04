#include <stdio.h>
#include <stdlib.h>

/*  setbits 函数：将x中从第p位开始的n位设置为y中最右边n位的值 
    默认 p > n 
*/
 
int setbits(int x, int p, int n, int y)
{
    int ans, mask;
    mask = ~((~0 << p) | ~(~0 << (p - n))); // 生成屏蔽码
    ans = (x | mask) & ((y << (p - n)) | ~mask); 
    // 用屏蔽码将x中对应位数屏蔽为1，将y中其他位屏蔽为1
    return ans;
}
 
int main()
{
    int x, y, p, n;
    char x_str[50], y_str[50], ans_str[50];
    int ans;

    x = 0b111000101010011111;
    y = 0b1010101;
    p = 13;
    n = 5;
    ans = setbits(x, p, n, y);

    itoa(x, x_str, 2);
    itoa(y, y_str, 2);
    itoa(ans, ans_str, 2);

    printf("x = %s\ny = %s\np = %d\nn = %d\n", x_str, y_str, p, n);
    printf("%s\n", ans_str);
    // printf("%d\n%d\n%d\n",x, x << 2, x);
    // 位运算不改变变量本身
    system("pause");
    return 0;
}
