#include <stdio.h>

/* 将连续多个空格用一个空格代替 */

int main()
{
    int flag = 0, c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (flag == 0)
                {
                    flag = 1;
                    putchar(c);
                }            
        }
        else
        {
            flag = 0;
            putchar(c);
        }
    }
}