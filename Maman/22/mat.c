#include "mat.h"

void printIntArray(int *array, int array_len, char *msg)
{
    int i;                          /* Variables decleration */
    printf("%s", msg);              /* Print user-defined dynamic message */
    for(i=0;i<array_len;i++)        /* Loop all array elements */
        printf("%d ", array[i]);    /* Print the current int element */
    printf("\n");                   /* Print newline */
}

void print4x4IntArray(int *array)
{
    int i, j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ", array[i][j]);
        printf("\n");
    }
    printf("\n");
}