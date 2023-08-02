#include <stdio.h>
void main()
{
    int i, j, A[3][3], l;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the num");
            scanf("%d", &A[i][j]);
        }
    }
    printf("the matrix A=\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }
    l = A[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(l<A[i][j])
            {
                l = A[i][j];
            }
    
        }
        
    }
    
    
    
    
    printf("The largest num=%d", l);
    
}
