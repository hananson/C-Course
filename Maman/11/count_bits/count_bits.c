#include <stdio.h>

int count_bits(long int num);  /*Prototype declaration*/

int main(void)
{
    long int input_number;
    printf("Please insert a decimal integer number:\n");  /* Get input number from user */
    scanf("%ld", &input_number);  /* Store returned number in input_number */
    printf("%s%ld%s%d%s", "The number of '1' bits in ", input_number, " is: ",count_bits(input_number),"\n");  /* Print results */
	return 0;
}

int count_bits(long int num)
{
    long int mask = 1L;  /* Define mask variable in same sizeof num (...00001) */
    short int counter = 0;  /* Initiate the returned value counter to 0. Unsigned Char (0-255) is enough here - long int number can have max 64 '1' bits */

    while(mask) /* Make bitwise-and between mask and num, and shift mask left until mask is zero */
    {
        if(mask & num)   /* Make bitwise-and between mask and num */
            counter++;   /* In case mask & num is not zero: bit is on! -> increment counter by one */
        mask = mask<<1;  /* Shift mask left once - to check the next bit. Shifting left to avoid cross platform/compiler right shift problems */
    }
    return counter;
}
