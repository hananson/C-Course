/* Partial Sums - Hanan Sonnino, ID 301893905 

 */

#include <stdio.h>
#include <stdlib.h>

int partialSums(int array[], int array_len);  /*Prototype declaration*/

int main(void)
{
    int array_len, i, *array;
    printf("Please insert the length of the array:\n");
    scanf("%d", &array_len);
    array = (int *)malloc(array_len * sizeof(int));
    printf("array address is: %d\n", *array);
    if(array==NULL)
        return 1;
    for(i=0;i<array_len;i++)
    {
        printf("Please insert a number for position %d:\n", i);
        scanf("%d", &array[i]);
    }
    printf("Printing the array:\n{ ");
    for(i=0;i<array_len;i++)
        printf("%d ", array[i]);
    printf("}\n");
    free(array);
	return 0;
}
