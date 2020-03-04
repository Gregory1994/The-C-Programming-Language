#include <stdio.h>
#include <stdlib.h>

/*  
    bitcount 函数：统计x中值为1的二进制位数
*/
 
int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; b += 1)
        x &= (x - 1);
        /*  判断x是否为0
            如果不是0，则删去一位1；
            如果是0，返回计数器b   */
    return b;
}
 
int main()
{
    int x;
    char x_str[50];
    int ans;

    x = 0b10001;
    ans = bitcount(x);

    itoa(x, x_str, 2);

    printf("x = %s\nn = %d\n", x_str, ans);

    system("pause");
    return 0;
}
