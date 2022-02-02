#include <stdio.h>

#define TABSIZE 8

int main(){
    int n;
    int pos = 0;
    int tc = 0;
    while((n = getchar()) != EOF){
        ++pos;
        if(n == ' '){
            ++tc;
            if(pos % TABSIZE == 0 && tc > 1){
                putchar('\t');
                tc = 0;
            }
        } else {
            while(tc){
                putchar(' ');
                --tc;
            }

            if(n == '\n')
                pos = 0;
            putchar(n);
        }
    }
}