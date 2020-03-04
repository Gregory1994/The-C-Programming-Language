#include <stdio.h>
#define MAXLINE 1000 // 行的最大长度

/* 编写函数reverse(s) */
/* 读入需要反转的字符串s和字符串长度len */

int getline(char line[], int maxline);
int reverse(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0){
        // printf("%s", line);
        reverse(line, len);
        printf("\n%s", line);
        printf("\nnum of string is:%d\n", len); 
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

    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int reverse(char s[], int len)
{
    int i= 0;
    char tmp;
    while(i < len - 2){
        tmp = s[i];
        s[i] = s[len - 2];
        s[len-2] = tmp;
        ++i;
        --len;
    }
    return 0;
}
