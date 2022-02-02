#include <stdio.h>

#define MAXLINE 1000

// Reverses input one line at a time

void reverse(char s[], char rs[], int len){
    int k = 0;
    for(int i = len - 2; i >= 0; i--){
        rs[k] = s[i];
        ++k;
    }
    rs[k] = '\0';
}

int getLine(char s[], int lim){
    int c, i;

    for(i=0; i<lim-1 && (c=getchar()) != EOF && c !='\n'; ++i)
        s[i] = c;
    
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int main(){
    int len;
    int max;
    char line[MAXLINE];
    char rLine[MAXLINE];
    
    max = 0;
    while((len = getLine(line, MAXLINE)) > 0){
        reverse(line, rLine, len);
        for(int i = 0; i < len; i++){
            putchar(rLine[i]);
        }
        putchar('\n');
    }

    return 0;
}