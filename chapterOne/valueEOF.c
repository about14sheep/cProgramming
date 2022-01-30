#include <stdio.h>

// prints the value of EOF

int main(){
    int n;
    while((n = getchar()) != EOF)
        ;
    printf("EOF value is %d\n", n);
}