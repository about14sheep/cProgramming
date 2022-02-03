#include <stdio.h>

int main(){
    int n;
    int inQuote = 0;
    int inComment = 0;
    
    while((n = getchar()) != EOF){
        if(n == '\''){
            if(inQuote == 1){
                inQuote = 0;
            } else {
                inQuote = 1;
            }
        }
        if(inComment == 1){
            if(n == '\n'){
                inComment = 0;
            }
        } else {
            if(n == '/' && inQuote == 0){
                inComment = 1;
            } else {
                putchar(n);
            }
        }
    }
}