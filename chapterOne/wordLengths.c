#include <stdio.h>

// Takes input of 10 words, charts their lengths in histogram

int main(){
    int n, c, i, longest, curr;
    int countArr[10];
    c = 0;
    i = 0;
    longest = 0;
    while((n = getchar()) != EOF){
        if(n == ' '){
            if (c > longest)
                longest = c;

            countArr[i] = c;
            i++;
            c = 0;
        } else {
            ++c;
        }
    }
    countArr[i] = c;

    int limit = 8;
    longest = longest + 3;
    while(longest > 0){
        printf("%2d | ", longest);
        for(i = 0; i < 10; i++){
            curr = countArr[i];
            if(curr == longest){
                putchar('-');
                putchar(' ');
                --countArr[i];
            } else {
                putchar(' ');
                putchar(' ');
            }
        }
        --longest;
        putchar('\n');
    }
}