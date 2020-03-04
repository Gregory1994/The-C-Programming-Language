#include <stdio.h>
#include <stdlib.h>

/*
编写htoi(s)，把由十六进制数字组成的字符串（包含可选的前缀0x或0X）转换为与之等价的整型值。
字符串中允许包含的数字包括：0~9，a~f或A~F
*/
int htoi(char s[]);

int main()
{
    char s[] = "0x1278AFC89";
    int n = htoi(s);
    printf("%d\n", n);
    system("pause");
    return 0;
}

int htoi(char s[])
{
    int i = 0, n = 0;
    n = 0;
    int flag = 1;
    if (s[i] == '0')
    {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
            ++i;
        else
            flag = 0;
    }    
    else
        flag = 0;
    
    while (flag == 1 && s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
            n = n * 16 + s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            n = n * 16 + s[i] - 'a' + 1;
        else if (s[i] >= 'A' && s[i] <= 'F')
            n = n * 16 + s[i] - 'A' + 1;
        else
            flag = 0; 
        ++i;       
    }

    return n;
}
