#include <stdio.h>

#define TABSIZE 4

int main(){
    int n;

    while((n = getchar()) != EOF){
        if(n == '\t'){
            for(int i = 0; i < TABSIZE; i++)
                putchar(' ');
        } else {
            putchar(n);
        }
    }
}