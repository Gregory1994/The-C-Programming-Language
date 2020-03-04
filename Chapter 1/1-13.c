#include <stdio.h>

#define IN 1   /* 在单词内 */ 
#define OUT 0  /* 在单词外 */

/* 打印输入中单词长度的直方图 */

int main()
{
    /* 统计输入中的单词长度 */
    int c, state, i, j;
    int nchar = 0; // 统计单词中的字符数
    int nword[20]; // 保存不同长度的单词个数
    int longest_word = 0;

    for (i = 0; i < 20; ++i)
        nword[i] = 0; // 初始化
    
    state = OUT;
    while ((c = getchar()) != EOF){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ){
            nchar++;
            if (state == OUT)
                state = IN;
        }
        else{
            if (state == IN){
                state = OUT;
                ++nword[nchar];

                if (nchar > longest_word)
                    longest_word = nchar;

                nchar = 0;
            }
        }
    }

    /* 绘制水平方向直方图 */

    printf("\n\n***********************************************************\n");
    printf("**********          Horizontal histogram         **********\n");
    printf("***********************************************************\n\n");

    for (i = 1; i <= longest_word; ++i){
        j = 1;
        printf("\nlength: %2d  ", i);
        while (j <= nword[i]){
            printf("#");
            ++j;
        }
    }
    // getchar();

    /* 绘制垂直方向直方图 */

    printf("\n\n***********************************************************\n");
    printf("**********           Vertical histogram          **********\n");
    printf("***********************************************************\n\n");

    for (i = longest_word; i >= 1; --i){
        printf("         ");
        for (j = 1; j <= longest_word; ++j){
            if (nword[j] >= i)
                printf(" ## ");
            else
                printf("    ");           
        }
        printf("\n"); 
    }
    printf("length = ");
    for (j = 1; j <= longest_word; ++j)
        printf(" %2d ", j);
    getchar();
}

/* 输入示例文本
TortoiseGit is a Windows Shell Interface to Git and based on TortoiseSVN. It's open source and can fully be build with freely available software.

Since it's not an integration for a specific IDE like Visual Studio, Eclipse or others, you can use it with whatever development tools you like, and with any type of file. Main interaction with TortoiseGit will be using the context menu of the Windows explorer.

TortoiseGit supports you by regular tasks, such as committing, showing logs, diffing two versions, creating branches and tags, creating patches and so on (see our Screenshots or documentation).

*/