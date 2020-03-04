#include <stdio.h>
#include <conio.h>

/* 可见方式显示制表符、空格、回退符 */

int main()
{
    int c;
    // while ((c = getchar()) != EOF) // 使用getchar()不能获得回退符
                                   // getchar()是流缓冲，用户按下回车键后，才从输入流中一个字符一个字符的读取；
                                   // 可以使用getch()
    while ((c = getch()) != EOF) // 这里getch() 不能读取Ctrl + Z停止，需要shift + F5
    {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else 
            putchar(c);
    }
}

