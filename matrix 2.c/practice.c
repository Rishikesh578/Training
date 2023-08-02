// #include<stdio.h>
// void main()
// {
//     int num,a[5],i,count=0;
//     printf("enter the array elements:");
//     for ( i = 0; i < 5; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("enter the number:");
//     scanf("%d",&num);
//     for ( i = 0; i < 5; i++)
//     {
//         if (num==a[i])
//         {
//             count=count+1;
//         }

//     }
//     printf("%d",count);
// }

// matrix multiplication

// #include <stdio.h>
// void main()
// {
//     int mat[3][3], mat2[3][3], mat3[3][3], i, j, k;
//     printf("enter the 1st matrix elements:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }
//     printf("enter the 2nd matrix elements:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &mat2[i][j]);
//         }
//     }
//     printf("matrix A:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");
//     }
//     printf("matrix B:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Matrix AXB:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//              mat3[i][j] = 0;
            
//                 for(k = 0; k < 3; k++)
//                 {
//                     mat3[i][j] = mat3[i][j] + mat[i][k] * mat2[k][j];
//                 }
            
//         }
//     }
//     printf("Product of matrix:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d ", mat3[i][j]);
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>

//  void main ()
// {
// #ifndef max
// printf("hello");
// #endif("hi");
// }
// #include<stdio.h>
// #define san  main()
// {
//     #ifndef san 
//     printf("yes");
//     #endif
//     printf("no");
// }
// void main()
// {
//     char A[10];
//     printf("enter the num");
//     gets(A);
//     printf("\n the string=");
//     puts(A);
// }
void  main()
{
    char A[10];
   
    printf("enter the string=");
    scanf("%s",&A);
    printf("\n the string=");
    printf("%s",A);
}