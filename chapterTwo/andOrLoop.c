#include <stdio.h>

#define MAXLIMIT 10000

int main(void){
    char s[MAXLIMIT];
    int i;

    for(i = 0; i < MAXLIMIT - 1; ++i){
        int c = getchar();
        if(c == '\n')
           break;
        if(c == EOF)
            break;
        s[i] = c;
    }

    for(int j = 0; j < i; ++j){
        putchar(s[j]);
    }
    putchar('\n');
}