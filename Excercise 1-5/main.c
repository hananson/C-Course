#include <stdio.h>

void main(){
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = upper;
    printf("Fahrenheit\tCelsius\n"); /* My addition for header */
    while (fahr >= lower){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%6.0f %15.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}