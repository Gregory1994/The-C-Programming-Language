#include <stdio.h>
#define MAXLINE 1000 // 行的最大长度

/* 删除每个输入行末尾的空格及制表符，并删除完全是空格的行 */
/* 可以先将每一行读入，然后从末尾开始删除 */

int getline(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0){
        printf("%s", line);
        printf("\nnum of string is:%d\n", len); 
        // 为了显示空格和换行符是否被删除打印字符串中的字符数
        // 打印的长度是字符串长度+换行符
    }

    getchar();
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i){
        if (i < lim - 2)
            s[i] = c;
    }

    while (s[i-1] == '\t' || s[i-1] == ' '){
        i--;
    }

    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
