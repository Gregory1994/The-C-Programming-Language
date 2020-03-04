#include <stdio.h>
#define MAXLINE 1000    // 允许的输入行最大长度

int max;                // 到目前为止发现的最长行的长度
char line[MAXLINE];     // 当前的输入航
char longest[MAXLINE];  // 用于保存最长的行
 
int getline(void);      // 两个版本最大的区别之一：v2的函数没有局部变量
void copy(void);

/* main 函数：特殊版本 */

int main()
{
    int len;
    extern int max;
    extern char longest[MAXLINE];

    max = 0;
    while ((len = getline()) > 0){
        if (len > max){
            max = len;
            copy();
        }
    }

    if (max > 0){
        printf("%s", longest);
    }
    getchar();
    return 0;
}

/* getline 函数：特殊版本 */

int getline()
{
    int c, i;
    extern char line[];

    for (i = 0;i <= MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i){
        line[i] = c;
    }
    if (c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy 函数：特殊版本 */

void copy(void)
{
    extern char line[], longest[];
    int i = 0;

    while ((longest[i] = line[i]) != '\0')
        ++i;
}