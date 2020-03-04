#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void expand(char s1[], char s2[]);

int main(void) {
    char * s[] = { "a-z", "a-z-", "-1-6-",
                "a-e-l", "a-z0-9", "5-5", NULL };
    char result[100];
    int i = 0;

    while ( s[i] ) {

        printf("Unexpanded: %s\n", s[i]);
        expand(result, s[i]);
        printf("Expanded  : %s\n", result);
        ++i;
    }
    system("pause");
    return 0;
}


/*  Copies string s2 to s1, expanding
    ranges such as 'a-z' and '8-3'     */

void expand(char s1[], char s2[]) {
    int i = 0;
    int j = 0;
    int start, end;

    while (s2[i]){
        switch (s2[i]){
            case '-':
                if (i == 0 || s2[i+1] == '\0' ){
                    s1[j++] = '-';
                    ++i;
                    break;
                }
                else{
                    if (s2[i-1] >= 'a' && s2[i+1] <= 'z')
                        ;
                    else if (s2[i-1] >= 'A' && s2[i+1] <= 'Z')
                        ;
                    else if (s2[i-1] >= '0' && s2[i+1] <= '9')
                        ;
                    else
                    {
                        fprintf(stderr, "EX3_3: Mismatched operands '%c-%c'\n",
                                s2[i-1], s2[i+1]);
                        s1[j++] = s2[i-1];
                        s1[j++] = s2[i++];
                        break;
                    }
                    start = s2[i-1];
                    end = s2[i+1];

                    for (;start < end;j++, start++)
                        s1[j] = start;
                    ++i;
                }
            break;
        
        default:
            if ( s2[i+1] == '-' && s2[i+2] != '\0' ) {

                /*  This character is the first operand in
                    a range, so just skip it - the range will
                    be processed in the next iteration of
                    the loop.                                   */

                ++i;
            }
            else {

                /*  Just a normal character, so copy it  */

                s1[j++] = s2[i++];
            }
            break;
        }
    }
    s1[j] = s2[i];   
}
