#include <stdio.h>

// counts the number of lines in input

int main(){
    int n, c;
    c = 0;
    while((n = getchar()) != EOF){
        if(n == '\n'){
            ++c;
        }
    }
    printf("number of lines is %d\n", c);
}