#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000 // 定义每行最大长度
#define TABNUM 8     // TAB的终止位

char * detab(char *text, int tabnum);

/* 编写程序detab */

int main()
{
    char text[MAXLINE], text_detab[MAXLINE];
	char string[80];                         //定义一个足够大的数组
	printf("Please enter string: ");         //输入一个字符串
	gets(text);
	text_detab = detab(text, TABNUM);                           //调用entab函数
	printf("%s", text_detab);                            //输出变换后的字符串

    getchar();
    return 0;
}

/*  编写程序getstr，用于获取字符串  */

char * detab(char text[], int tabnum)
{
    char text_detab[MAXLINE];
    int i, j, c, spacenum, index;

    i = 0; j = 0; index = 0;

    while ((c = text[j]) != '\0'){
        if (c == '\n'){
            text_detab[i] = '\n';
            index = 0;
            ++i;
        }
        else if (c == '\t'){
            spacenum = TABNUM - index % TABNUM; 
            /*  os系统里tab的空格数不是默认为8，
                而是指定跳到下一个8的整数倍的位置*/
            while(spacenum != 0){
                text_detab[i] = ' ';
                ++index;
                ++i;
                --spacenum;
            }
        }
        else{
            text_detab[i] = c;
            ++index;
            ++i;
        }
        ++j;
    }

    return text_detab;
}
