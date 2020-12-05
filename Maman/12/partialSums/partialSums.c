/* Partial Sums - Hanan Sonnino, ID 301893905 

This program gets an array (length and content) from the user.
    1. The program prints the array as gotten from the user.
    2. The program generates a new partial sums array from the received array.
    3. The program print the new generated array.
Example:
    For the input 5-element array:  [10 -5 20 4 35]
    The program will generate this: [10 5 25 29 64]

 */

#include <stdio.h>   /* Include I/O library - Needed for printf() and scanf() */
#include <stdlib.h>  /* Include standard library - Needed for malloc() and free() */

int *partialSums(int *array, int array_len);                            /* Prototype declaration */
void printIntArray(int *array, int array_len, char *msg);               /* Prototype declaration */

int main(void)
{
    int array_len, *array, *new_array, i;                                /* Variables decleration */
    printf("Please insert the length of the array:\n");                  /* Requesting input from user */
    scanf("%d", &array_len);                                             /* Assign user array length into array_len */
    array = (int *)malloc(array_len * sizeof(int));                      /* Request Heap RAM address allocation for dynamic size array. Requested size is: {array length X the size of int} */
    for(i=0;i<array_len;i++)                                             /* Request user number input until array is full */
    {
        printf("Please insert a number for position %d:\n", i);          /* Print request input number from user */
        scanf("%d", &array[i]);                                          /* Assign user number into current array position */
    }
    printIntArray(array, array_len, "The Input Array:\n");               /* Print the array */
    new_array = partialSums(array, array_len);                           /* Send array, array_len to partialSums(), and assign the returned value (array pointer) to new_array */
    printIntArray(new_array, array_len, "The Partial Sums Array:\n");    /* Print the new generated array */
    free(array);                                                         /* Free Heap RAM allocation for array */
    free(new_array);                                                     /* Free Heap RAM allocation for new_array */
	return 0;                                                            /* Return exit code 0 - program is done successfully */
}


/*
printIntArray - A utility function that prints int arrays.
Args:
    array (int *) - Array first location address
    array_len (int) - Array length
    msg (char *) - A message to be printed before the array is printed
Returns:
    void
*/

void printIntArray(int *array, int array_len, char *msg)
{
    int i;                          /* Variables decleration */
    printf("%s", msg);              /* Print user-defined dynamic message */
    for(i=0;i<array_len;i++)        /* Loop all array elements */
        printf("%d ", array[i]);    /* Print the current int element */
    printf("\n");                   /* Print newline */
}

/*
partialSums - A function that generates partial sums array from an input array.
Args:
    *array (int *) - An input array
    array_len (int) - Array length
Returns:
    new_array (int *) - The new partial sums generated array
*/

int *partialSums(int *array, int array_len)
{
    int i, *new_array;                                      /* Variables decleration */
    new_array = (int *)malloc(array_len * sizeof(int));     /* Request Heap RAM address allocation for dynamic size array. Requested size is: {array length X the size of int} */
    new_array[0] = array[0];                                /* Copy the first number of the array as-is, no manipulation needed here */
    for(i=1;i<array_len;i++)                                /* Loop from the second number in the array until the last */
        new_array[i] = array[i] + new_array[i-1];           /* Assign the new array the current position array number, plus the new array previous one to get the partial sum */
    return new_array;                                       /* Return the new array */
}