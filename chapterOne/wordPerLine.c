#include <stdio.h>

// Puts each word of input on a new line

int main(){
    int n;

    while((n = getchar()) != EOF){
        if(n == ' ' || n == '\t'){
            putchar('\n');
        } else {
            putchar(n);
        }
    }
    putchar('\n');
}