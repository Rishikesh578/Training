#include <stdio.h>
void main()
{
    int i, j, A[3][3], B[3][3], C[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the matrix of A=");
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the matrix of B=");
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n the matrix A is= \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n the matrix B is= \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\n the sum of two matrix c = \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }
}
