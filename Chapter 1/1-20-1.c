#include <stdio.h>
#define MAXLINE 1000 // 定义每行最大长度
#define TABNUM 8     // TAB的终止位

/* 编写程序detab */

int main()
{
    char text[MAXLINE];
    int c, index, spacenum;

    index = 0;

    while ((c = getchar()) != EOF){
        if (c == '\n'){
            text[index] = '\0';
            printf("%s\n", text);
            index = 0;
        }
        else if (c == '\t'){
            spacenum = TABNUM - index % TABNUM; 
            /*  os系统里tab的空格数不是默认为8，
                而是指定跳到下一个8的整数倍的位置*/
            for (int i = 0; i < spacenum; ++i){
                text[index] = ' ';
                ++index;
            }
        }
        else{
            text[index] = c;
            ++index;
        }
    }
    printf("%s", text);
    getchar();
    return 0;
}
