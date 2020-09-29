#include <stdio.h>

void main(){
    float fahr, celsius;
    int lower, upper, step;
    lower = -50;
    upper = 150;
    step = 20;
    
    celsius = lower;
    printf("Fahrenheit\tCelsius\n"); /* My addition for header */
    while (celsius <= upper){
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%6.0f %15.1f\n", fahr, celsius);
        celsius = celsius + step;
    }
}