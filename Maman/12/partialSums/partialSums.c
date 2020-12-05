/* Partial Sums - Hanan Sonnino, ID 301893905 

 */

#include <stdio.h>
#include <stdlib.h>

int *partialSums(int *array, int array_len);  /*Prototype declaration*/
void printArray(int *array, int array_len);

int main(void)
{
    int array_len, *array, *new_array, i;
    printf("Please insert the length of the array:\n");
    scanf("%d", &array_len);
    array = (int *)malloc(array_len * sizeof(int));

    if(array==NULL)
        return 1;
    
    for(i=0;i<array_len;i++)
    {
        printf("Please insert a number for position %d:\n", i);
        scanf("%d", &array[i]);
    }
    printArray(array, array_len);
    new_array = partialSums(array, array_len);
    printArray(new_array, array_len);
    free(array);
    free(new_array);
	return 0;
}


void printArray(int *array, int array_len)
{
    int i;
    printf("Printing the array:\n");
    for(i=0;i<array_len;i++)
        printf("%d ", array[i]);
    printf("\n");
}


int *partialSums(int *array, int array_len)
{
    int i, *new_array;
    new_array = (int *)malloc(array_len * sizeof(int));
    new_array[0] = array[0];
    for(i=1;i<array_len;i++)
        new_array[i] = array[i] + new_array[i-1];
    printArray(new_array, array_len);
    return new_array;
}