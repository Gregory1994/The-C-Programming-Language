#include <stdio.h>
#define MAXLINE 5 // 行的最大长度

/* 打印任意长度的输入的长度 */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0){
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0){
        printf("%s", longest);
    }
    getchar();
    return 0;
}

int getline(char s[], int lim)
{
    int c, i, j;
    j = 0;

    for (i = 0; /* i <= lim && */ (c = getchar()) != EOF && c != '\n'; ++i){
        if (j < lim - 2)
            s[j] = c;
            ++j;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
        ++j;
    }
    
    s[j] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}