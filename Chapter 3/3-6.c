#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

void itoa_v4(int n, char s[], int length);
void reverse(char s[]);

int main(void) {
    char buffer[20];

    int length = 5;
    int num = -31;
    
    printf("The num to be transfered: %d\n", num);
    itoa_v4(num, buffer, length);
    printf("Result: %s\n", buffer);  
    
    system("pause");
    return 0;
}

void itoa_v4(int n, char s[], int length) {
    int i, sign;
    sign = n;
    
    i = 0;
    do {
        s[i++] = abs(n % 10) + '0';
    } while (( n /= 10 ) != 0);
    if (sign < 0)
        s[i++] = '-';
    
    while (i < length)
        s[i++] = ' ';

    s[i] = '\0';
    reverse(s);
}

void reverse(char s[]) {
    int c, i, j;
    for ( i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
