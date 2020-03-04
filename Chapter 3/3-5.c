#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

void itoa_v3(int n, char s[], int base);
void reverse(char s[]);

int main(void) {
    char buffer[20];
    int base = 8;
    int num = 3972;

    printf("The num to be transfered: %d\n", num); // 24 转换为十六进制是 16
    printf("The base is: %d\n", base);

    itoa_v3(num, buffer, base);

    printf("Result: %s\n", buffer);
    
    system("pause");
    return 0;
}

void itoa_v3(int n, char s[], int base) {
    int i, sign;
    sign = n;
    
    i = 0;
    do {
        if (n % base < 10)
            s[i++] = abs(n % base) + '0';
        else
            s[i++] = abs(n % base - 10) + 'A';
    } while (( n /= base ) != 0);
    if (sign < 0)
        s[i++] = '-';
    
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
