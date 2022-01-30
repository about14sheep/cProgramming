#include <stdio.h>

// replaces 2 or spaces with 1

int main(){
    int n, pc;

    pc = 0;
    while((n = getchar()) != EOF){
        if(n == ' '){
            ++pc;
            continue;
        }
        if(pc > 0){
            putchar(' ');
            pc = 0;
        }
        putchar(n);
    }
    printf("\n");
}