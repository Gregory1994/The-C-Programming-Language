#include <stdio.h>

/* 编写一个统计空格（space）、制表符（tab）
   和换行符（enter）个数的程序          */

int main()
{
    int space_nums = 0, tab_nums = 0, enter_nums = 0; // 变量需要初始化
    int c;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++space_nums;
        else if (c == '\t')
            ++tab_nums;
        else if (c == '\n')
            ++enter_nums;
    
    printf("the input number of space is: %d\nthe input number of tab is: %d\nthe input number of enter is: %d\n", space_nums, tab_nums, enter_nums);
} 