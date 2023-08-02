// //  1. to display 5 values from the user and store them in.
// #include <stdio.h>
// #include <strings.h>
// void main()
// {
//     int i, A[5];

//     for (i = 1; i <= 5; i++)
//     {
//         printf("enter the no.: ");
//         scanf("%d", &A[i]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d", A[i]);
//     }
// }

// 2. Program to display 5 values which are already initilized.

// #include<stdio.h>
// void main()
// {
//     int i, A[]="4,3,5,6,4";
//     printf("%d",A[i]);
    
// }

// #include<stdio.h>
// #define product(x) (x*x)
// void main()
// {
//     int i,j,k;
//     i=3;
//     j=product(i++);
//     k=product(++i);
//     printf("%d%d%d",i,j,k);
// }

// #include<stdio.h>
// #define mult(x) (x*x)
// void main()
// {
//     int i,j,k;
//     i=4;
//     j=mult(i+1);
//     k=mult(++i);
//     printf("%d%d%d",i,j,k);
// }

// #include<stdio.h>
// #define x 5
// void main()
// {
//   #ifdef x
//   printf("Hello");
//   #else 
//   printf("Bye");
//   #endif
// }

// ______________________________________________________

#include<stdio.h>
struct student 
{
    int Roll;
    char Name[30];
    float marks;
};
void main()
{
    struct student()
    int i;
    FILE *fp;
    fopen=("student.txt","w");
    if(fp==NULL)
    {
        printf("The file is not exit");
        exit(1);
    }

    for(i=0;i<5;i++)
    {
        printf("Enter the Roll No=");
        scanf("%d",&s[i].Roll);
        printf("Enter the Name=");
        scanf("%s",&s[i].Name);
        printf("Enter the Marks=");
        scanf("%f",&s[i].Marks)
    }
       for(i=0;i<5;i++)
       {
        printf("The details of student=");
        printf("The Roll Num is=%d",S[i])
       }

        printf("The details of student");
        printf("the student roll num=%d",si.Roll)
    }

}
