#include <stdio.h>

/* 打印输入中各字符出现频度的直方图
   假设输入的字符只有a~z           */

int main()
{
    /* 统计输入中各字符出现频度 */
    int c, i, j;
    int nchar[27]; // 保存各字符出现频度
    int most_char_n = 0;
    for (i = 0; i < 26; ++i)
        nchar[i] = 0; // 初始化

    while ((c = getchar()) != EOF){
        if ((c >= 'a' && c <= 'z') ){
            nchar[c - 'a']++;
        }
        else{
            nchar[27]++;
        }
    }

    /* 统计出现最多的字符 */

    for (i = 0; i < 26; ++i){
        if (nchar[i] > most_char_n)
            most_char_n = nchar[i];
    }

    /* 绘制垂直方向直方图 */

    printf("\n\n***********************************************************\n");
    printf("**********           Vertical histogram          **********\n");
    printf("***********************************************************\n\n");

    for (i = most_char_n; i > 0; --i){
        printf("    ");
        for (j = 1; j < 26; ++j){
            if (nchar[j] >= i)
                printf(" # ");
            else
                printf("   ");           
        }
        printf("\n"); 
    }
    printf("char");
    for (j = 0; j < 26; ++j){
        printf(" %1c ", j+97);
    }        
    getchar();
}

/* 输入示例文本
TortoiseGit is a Windows Shell Interface to Git and based on TortoiseSVN. It's open source and can fully be build with freely available software.

Since it's not an integration for a specific IDE like Visual Studio, Eclipse or others, you can use it with whatever development tools you like, and with any type of file. Main interaction with TortoiseGit will be using the context menu of the Windows explorer.

TortoiseGit supports you by regular tasks, such as committing, showing logs, diffing two versions, creating branches and tags, creating patches and so on (see our Screenshots or documentation).

*/