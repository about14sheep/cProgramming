#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main(){
    float fahr, celsius;

    fahr = LOWER;
    printf("\n==========================\n\n");
    printf("Fahrenheit\tCelsius\n");
    while(fahr <= UPPER){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("  %3.0f\t    ->\t%6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    printf("\n==========================\n\n");
    
    celsius = LOWER;
    printf("Celsius\t\tFahrenheit\n");
    while(celsius <= UPPER){
        fahr = (celsius / (5.0/9.0)) + 32.0;
        printf(" %3.0f\t   ->\t %6.1f\n", celsius, fahr);
        celsius = celsius + STEP;
    }
    printf("\n==========================\n\n");

    int fahr2;
    printf("Fahrenheit\tCelsius\n");
    for(fahr2 = UPPER; fahr2 >= LOWER; fahr2 = fahr2 - STEP)
        printf("  %3d\t    ->\t%6.1f\n", fahr2, ((5.0/9.0) * (fahr2 - 32.0)));
    
    printf("\n==========================\n\n");
}