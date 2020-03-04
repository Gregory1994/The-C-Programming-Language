#include <stdio.h>

#define IN 1   /* 在单词内 */ 
#define OUT 0  /* 在单词外 */

/* 以每行一个单词的形式打印输入 */

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n' ){
            if (state == IN){
                state = OUT;
                printf("\n");
            }
        }
        else{
            putchar(c);
            if (state == OUT)
                state = IN;
        }
    }

}