#include <stdio.h>
#define MAXLINE 1000 // 行的最大长度

/* 打印长度大于80个字符的所有输入行 */

int getline(char line[], int maxline);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 5;
    while ((len = getline(line, MAXLINE)) > 0){
        if (len > max + 1){ // 5个字符加上回车符 '\n'
        /*  例如，输入的5个字符为line = aaaaa，输出要求大于5个字符
            这个样例不符合条件
            line[0~4] = aaaaa, line[5] = '\n'，line[6] = '\0'
            所以长度len = 6 = max + 1，不输出
        */
            printf("%s", line);
        }
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
    
    s[i] = '\0'; // '\0'是字符串结尾的标志，打印'\0'会什么也不显示
    
    return i;
}
