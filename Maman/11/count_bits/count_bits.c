#include <stdio.h>

int count_bits(long int num);

int main(void)
{
    long int input_number;
    printf("Please insert a number:\n");
    scanf("%ld", &input_number);
    printf("%s%ld%s%d%s", "The number of bits in ", input_number, " is: ",count_bits(input_number),"\n");
	return 0;
}

int count_bits(long int num)
{
    long int mask = 1L;
    int counter = 0;
    while(mask)
    printf("%s%d%ld%s", "Counter is: ", counter, "\n Mask is: ", mask, "\n")
    {
        if(mask & num)
            counter++;
        mask<<1;
    }
    return counter;
}
