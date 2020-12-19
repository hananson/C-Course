#include "mat.h"


int main(void)
{
    mat MAT_A = EMPTY_MAT;
    print4x4IntArray(MAT_A);

    int i, j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ", MAT_A[i][j]);
        printf("\n");
    }
    printf("\n");

    return 0;
}



