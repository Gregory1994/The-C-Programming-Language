#include <stdio.h>
#include <stdlib.h>

int atoi_1(char s[]); // atoi是系统命名的方法，直接使用atoi作为函数名会报错

int main()
{   
    char s[] = "123";
    int n = atoi_1(s);
    printf("%d", n);
    system("pause");
    return 0;
}

/*  atoi函数：将字符串s转换为相应的整型数 */
int atoi_1(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    {
        n = 10 * n + s[i] - '0';
    }
    return n;
}

