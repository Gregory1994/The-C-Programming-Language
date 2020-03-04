#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int print_limit();

int main()
{
	// printf("signed char min=%d, signed char max=%d\n", SCHAR_MIN, SCHAR_MAX);
	// printf("unsigned char max=%d\n", UCHAR_MAX);
	// printf("signed short min=%d, signed short max=%d\n", SHRT_MIN, SHRT_MAX);
	// printf("unsigned short max=%d\n", USHRT_MAX);
	// printf("signed int min=%d, signed int max=%d\n", INT_MIN, INT_MAX);
	// printf("unsigned int max=%u\n", UINT_MAX); // 
	// printf("signed long min=%d, signed long max=%d\n", LONG_MIN, LONG_MAX);
	// printf("unsigned long max=%u\n", ULONG_MAX);

    // printf("\n\n");
    print_limit();
	system("pause");
	return 0;
}

int print_limit()
{

    printf("The number of bits in a byte %d\n\n", CHAR_BIT);

    printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
    printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
    printf("The maximum value of UNSIGNED CHAR = %d\n\n", UCHAR_MAX);


    printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
    printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
    printf("The maximum value of UNSIGNED SHORT INT = %u\n\n", USHRT_MAX); 

    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);
    printf("The maximum value of UNSIGNED INT = %u\n\n", UINT_MAX);  // printf无符号整型变量 %u，否则会溢出

    printf("The minimum value of CHAR = %d\n", CHAR_MIN);
    printf("The maximum value of CHAR = %d\n\n", CHAR_MAX);

    printf("The minimum value of LONG = %d\n", LONG_MIN);
    printf("The maximum value of LONG = %d\n", LONG_MAX);
    printf("The maximum value of UNSIGNED LONG INT = %u\n\n", ULONG_MAX); // printf无符号整型变量 %u，否则会溢出

    return 0;
}