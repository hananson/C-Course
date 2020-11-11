#include <stdio.h>

int count_odd_bits(unsigned short int num);  /*Prototype declaration*/

int main(void)
{
    long int input_number;
    printf("Please insert a decimal integer number:\n");  /* Get input number from user */
    scanf("%ld", &input_number);  /* Store returned number in input_number */
    printf("%s%ld%s%d%s", "The number of '1' odd bits in ", input_number, " is: ",count_odd_bits(input_number),"\n");  /* Print results */
	return 0;
}

int count_odd_bits(unsigned short int num)
{
    unsigned short int mask = 2;  /* Define mask variable in same sizeof num (...000010) */
    unsigned short int counter = 0;  /* Initiate the returned value counter to 0 */

    while(mask) /* Make bitwise-and between mask and num, and shift mask left until mask is zero */
    {
        if(mask & num)   /* Make bitwise-and between mask and num */
            counter++;   /* In case mask & num is not zero: bit is on! -> increment counter by one */
        mask = mask<<2;  /* Shift mask left twice - to check the next odd bit. Shifting left to avoid cross platform/compiler right shift problems */
    }
    return counter;
}
