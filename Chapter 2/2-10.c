#include <stdio.h>
#include <stdlib.h>

int lower(char x);

int main()
{
    char c, b;
    while((c=getchar())!=EOF)
    {
        b=lower(c);
        printf("%c", b);
    }
    system("pause");
    return 0;
}

int lower(char x)
{
    x=(x>='A'&&x<='Z') ? (x+32) : x;
    return x;
}
