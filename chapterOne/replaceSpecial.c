#include <stdio.h>

// Replaces special characters with their value

int main(){
    int n;

    while((n = getchar()) != EOF){
        if(n == '\n'){
            printf("\\n");
        } else
        if(n == '\t'){
            printf("\\t");
        } else
        if(n == '\b'){
            printf("\\b");
        } else
        if(n == '\\'){
            printf("\\\\");
        } else {
            putchar(n);
        }
    }
    printf("\n");
}