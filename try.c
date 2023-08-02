#include <stdio.h>

// int main()
// {
//     int t;
//     char A[10];
//     printf("Enter the string=");
//     gets(A);
//     t= strlen(A);
//     printf("the length of the string=%d",t);
//     return (0);

// }

// void  main()
// {
//     int i=0,l=0;
//     char A[]="Banty Raj";
//     while(A[i]!='\0')
//     {
//         i++;
//         l++;
//     }
//     l--;
//     printf("\n The reverse of string=");
//     for(i=l;i>=0;i--)
//     {
//         printf("%c",A[i]);
//     }

// }

// void main()
// {
//     char A[10];
//     char B[10];
//     printf("Enter the string A=");
//     gets(A);
//     printf("Enter the string B=");
//     gets(B);
//     strcat(A,B);
//     printf("The string =%s",A);
// }

// void  main()
// {
//     char A[]="Rishikesh";
//     char B[]="Raj";
//     int i,l,m,j;
//     l=strlen(A);
//     m=strlen(B);                       //there is a problem.not execute the program
//     i=l;                                  // concatinate without library fun()
//     j=0;
//     while(j<m)
//     {
//         A[i]=B[j];
//         j++;
//         i++;
//     }
//     printf("The final string=%s",A);
// }

// void main()
// {
//     char A[] = "banty";
//     char B[] = "kumar";
//     int f = 0, i, m;
//     m = strlen(A);
//     while (i < m)
//     {                                   // there is also problem two indentical strings using without library fun()
//         if (A[i] != B[i])
//         {
//             f = 1;
//             break;
//         }
//         i++;
//     }
//     if (f == 0)
//     {
//         printf("The string is identical=");
//     }
//     else
//     {
//         printf(" The string is not identical=");
//     }
// }

//---------------------------------------------------------------------------------------
// The num is palindrom or not using library function.

// void main()
// {
//     char A[10];
//     char B[10];
//     int i,j,l=0,f=0;
//     printf("Enter the string A=");
//     gets(A);
//     i=0;
//     while(A[i]!='\0')
//     {                                   //There is also problem .using library fun(() string is palindrom or not
//         l=l+1;
//         l=i+1;
//     }
//     j=l-1;
//     i=0;
//     while(j>=0)
//     {
//         B[i]=A[j];
//         j=j-1;
//         i=i+1;
//     }
//     i=0;
//     while(1<l)
//     {
//         if(A[i]!=B[i])
//         {
//             f=1;
//             break;
//         }
//         i++;
//     }
//     if(f==0)
//     {
//         printf("The string is palindrom=");
//     }
//     else
//     {
//         printf("The string is not palindrom=");
//     }
// }

//----------------------------------------------------------------------------------

// void main()
// {
//     char A[20];
//     printf("Enter the string=");
//     gets(A);
//     strupr(A);
//     printf("The string into Upper case=%s",A);

// }

// void main()
// {
//     int t,i;
//     char A[10];
//     printf("Enter the string=");
//     scanf("%s",&A);          //gets(A);
//     t=strrev(A);
//     printf("the reverse string=%s",t);
// }

// void main()
// {
//     int i=0,l=0;
//     char A[33]="rishikesh raj";
//     // printf("Enter the string=");
//     // scanf("%s",&A);
//     while(A[i]!='\0')
//     {
//         i++;
//         l++;
//     }
//     // l=l-1;
//     printf("\n The reverse of the string=");
//     for(i=l;i>=0;i--)
//     {
//         printf("%c",A[i]);
//     }
// }
// -------------------------------------------------------------------
//             program to print lower triangular matrix.
// void main()
// {
//     int i, j, n, p[10][10];
//     printf("enter the num of row or column=");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &p[i][j]);
//         }
//     }
//     printf("\n entre the element of matrix=\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d", p[i][j]);
//         }
//         printf("\n");
//     }
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             if (i<j)
//             {
//                 p[i][j] = 0;
//             }
//         }
//     }
//     printf("the matrix is lower triangular=\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%5d", p[i][j]);
//         }
//         printf("\n");
//     }
// }

      

