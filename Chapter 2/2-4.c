#include <stdlib.h>
#include <stdlib.h>

void squeeze(char s[], char t[]);

int main()
{
    char s[] = "fdsafadsfarwqe";
    char t[] = "fds";
    printf("input S string is: %s\n", s);
    printf("input T string is: %s\n", t);
    squeeze(s, t);
    printf("output S string  is: %s\n", s);
    system("pause");
    return 0;
    
}

void squeeze(char s[], char t[])
{
    int i = 0, j = 0, tmp = 0;
    int s_len = strlen(s);

    while (t[j] != '\0')
    {
        for (tmp = 0; tmp < s_len; ++tmp)
        {
            if (s[tmp] != t[j]){
                s[i] = s[tmp];
                ++i;
            }
        }
        s[i] = '\0';
        s_len = ++i;
        i = 0;   
        ++j;     
    }
}

// 这样写有个问题，就是复杂度很高O(m*n)，mn是字符串s，t的长度

