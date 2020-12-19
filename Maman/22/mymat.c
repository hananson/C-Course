#include "mat.h"


int main(void)
{
    mat MAT_A, MAT_B, MAT_C, MAT_D, MAT_E, MAT_F = EMPTY_MAT;
    /*print4x4IntArray(MAT_A);*/

    int i, j;
    char *input;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ", MAT_A[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("Please Enter the desired command:\n");
    
    scanf("%c", &input);
    printf("%c", input);

    return 0;
}



