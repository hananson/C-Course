#include <stdio.h>

void main(void){
    int c;
//    printf("%d", getchar() != EOF);
    while((c = getchar()) != EOF){
        putchar(c);
        printf("%s", EOF);
    }
}