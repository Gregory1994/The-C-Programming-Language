#include <stdio.h>
#include <stdlib.h>

/*  
    rightrot 函数：返回将x循环后移n位
    这里有个问题，是按照无符号数去移动，还是按照二进制数去移动？
    例如：0001 0101右移一位
    应该是 1000 1010 还是 0001 1010？

*/
 
// 这里是第一种理解，32位无符号数的解法 
// int rightrot(int x, int n)
// {
//     while (n != 0)
//     {
//         if (x & 1 == 1)
//             x = (x >> 1) | ~(~0U >> 1);
//         else
//             x = (x >> 1);
//         n--;
//     }
//     return x;
// }

// 这里是第二种理解，需要计算x的最高位数 

int numlength(int x)
{
    int i = 0;
    while (x != 0){
        ++i;
        x = x >> 1;
    }
    return i;
}

int rightrot(int x, int n) // 函数写在main()函数前面，不需要声明函数（显然）
{
    int i, shift;
    i = numlength(x);

    n = n % i;
    shift = 1 << (i - 1);

    while (n != 0)
    {
        if (x & 1 == 1)
            x = (x >> 1) | shift;
        else
            x = (x >> 1);
        n--;
    }
    return x;
}
 
int main()
{
    int x, n;
    char x_str[50], ans_str[50];
    int ans;

    x = 0b11110;
    n = 3;
    ans = rightrot(x, n);

    itoa(x, x_str, 2);
    itoa(ans, ans_str, 2);

    printf("x = %s\nn = %d\n", x_str, n);
    printf("%s\n", ans_str);

    system("pause");
    return 0;
}
