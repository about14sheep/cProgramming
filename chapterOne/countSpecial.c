#include <stdio.h>

// counts special characters in input

int main(){
    int c, n;

    c = 1;
    while((n = getchar()) != EOF){
        if(n == '\n' || n == '\t' || n == ' ')
            ++c;
    }
    printf("special character count is %d\n", c);
}