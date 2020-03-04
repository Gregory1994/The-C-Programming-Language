#include <stdio.h>
#include <stdlib.h>

int main()
{

//    signed types
    printf("The minimum value of SIGNED CHAR = %d\n", -(char)((unsigned char) ~0 >> 1) - 1);
    printf("The maximum value of SIGNED CHAR = %d\n", (char)((unsigned char) ~0 >> 1));
    printf("The minimum value of SIGNED SHORT = %d\n", -(short)((unsigned short) ~0 >> 1) - 1);
    printf("The maximum value of SIGNED SHORT = %d\n", (short)((unsigned short) ~0 >> 1));
    printf("The minimum value of SIGNED INT = %d\n", -(int)((unsigned int) ~0 >> 1) - 1);
    printf("The maximum value of SIGNED INT = %d\n", (int)((unsigned int) ~0 >> 1));
    printf("The minimum value of SIGNED LONG = %d\n", -(long)((unsigned long) ~0 >> 1) - 1);
    printf("The maximum value of SIGNED LONG = %d\n\n", (long)((unsigned long) ~0 >> 1));
/* 
(char)((unsigned char) ~0 >> 1)表达式的作用：
~0将0的各个二进制位取反全部转换为1，
(unsigned short) ~0 >> 1将unsigned char类型值右移一位以清除符号位，
(char)((unsigned char) ~0 >> 1))将结果值进一步转换为char类型，最终得到了signed char类型的最大值。

-(char)((unsigned char) ~0 >> 1) - 1表达式的作用：
在最大正数的情况下，取其负数减一，应为最小值
*/

//    unsigned types
    printf("The maximum value of UNSIGNED CHAR = %u\n", (unsigned char) ~0);
    printf("The maximum value of UNSIGNED SHORT = %u\n", (unsigned short) ~0);
    printf("The maximum value of UNSIGNED INT = %u\n", (unsigned int) ~0);
    printf("The maximum value of UNSIGNED LONG = %u\n\n", (unsigned long) ~0);

	system("pause");
	return 0;
}