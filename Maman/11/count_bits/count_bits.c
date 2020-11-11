/* Count Bits - Hanan Sonnino, ID 301893905 

This program gets a decimal number (long int) from the user - and prints the number of '1' bits in it. 
The calculation is acheived using a while loop on the bit locations, masking them using bitwise-and 1. 

Example: The input decimal number 15 in binary base is 1111, thus returned value will be 4 (bits in locations 1,2,3,4 are on). */

#include <stdio.h>

int count_bits(long int num);  /*Prototype declaration*/

int main(void)
{
    long int input_number;  /* Declare input number that will be asked from user */
    printf("Please insert a decimal integer number:\n");  /* Ask for an input number from user */
    scanf("%ld", &input_number);  /* Store returned number in input_number */
    printf("%s%ld%s%d%s", "The number of '1' bits in ", input_number, " is: ",count_bits(input_number),"\n");  /* Print results */
	return 0;
}


/* count_bits
Purpose: Count the number of '1' bits in a decimal number
Args: num (long int int) - decimal input number
Returns: counter (short int) - number of '1' bits. */
int count_bits(long int num)  
{
    long int mask = 1L;  /* Define mask variable in same sizeof num (...00001) */
    short int counter = 0;  /* Initiate the returned value counter to 0 */

    while(mask) /* Make bitwise-and between mask and num, and shift mask left once until mask is zero */
    {
        if(mask & num)   /* Make bitwise-and between mask and num */
            counter++;   /* In case mask & num is not zero: bit is on! -> increment counter by one */
        mask = mask<<1;  /* Shift mask left once - to check the next bit. Shifting left to avoid cross platform/compiler right shift problems */
    }
    return counter;  /* Return counted odd bits */
}
