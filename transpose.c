#include<stdio.h>
void main()
{
    int i,j,A[3][3],B[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the num=");
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           B[j][i]=A[i][j]; 
        }
    }
    printf("\n the matrix of A=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",A[i][j]);
        }
       
    
    printf("\n");
    }
    printf("\n the transpose matrix B=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",B[i][j]);
        }
        printf("\n");
    }



}