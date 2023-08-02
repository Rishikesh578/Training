// #include<stdio.h>
// int stack[20];
// int top = -1;

// void push(int x)
// {
//     stack[++top] = x;
// }

// int pop()
// {
//     return stack[top--];
// }

// int main()
// {
//     char exp[20];
//     char *e;
//     int n1,n2,n3,num;
//     printf("Enter the expression :: ");
//     scanf("%s",exp);
//     e = exp;
//     while(*e != '\0')
//     {
//         if(isdigit(*e))
//         {
//             num = *e - 48;
//             push(num);
//         }
//         else
//         {
//             n1 = pop();
//             n2 = pop();
//             switch(*e)
//             {
//             case '+':
//             {
//                 n3 = n1 + n2;
//                 break;
//             }
//             case '-':
//             {
//                 n3 = n2 - n1;
//                 break;
//             }
//             case '*':
//             {
//                 n3 = n1 * n2;
//                 break;
//             }
//             case '/':
//             {
//                 n3 = n2 / n1;
//                 break;
//             }
//             }
//             push(n3);
//         }
//         e++;
//     }
//     printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//     int m, d, y, cd = 8, cm = 10, cy = 2022, Age;
//     printf("Enter the date ,month ,year");
//     scanf("%d %d %d ", &d,&m,&y);

//     if (y < cy)
//     {
//         if (m < cm)
//         {
//             Age = cy - y - 1;
//             printf("this is age=%d ", Age);
//         }
//         else if (m == cm)
//         {
//             if (d < cd)
//             {
//                 Age = cy - y - 1;
//                 printf("the age is=%d", Age);
//             }
//             else if(d==cd)
//             {
//                 Age=cy-y;
//                 printf("This is current date =%d",Age);
//             }
//             else
//             {
//                 Age = cy - y;
//                 printf("The age is =%d", Age);
//             }
//         }
//         else
//         {
//             Age = cy - y;
//             printf("this is age=%d", Age);
//         }
//     }
//     else
//     {
//         printf("this year is wrong");
//     }
// if (y<cy && m<cm && m==cm && d<cd)
// {
//     Age = cy-y-1;
//     printf("%d",Age);
// }
// else{
//     Age = cy-y;
//     printf("%d",Age);
// }
// }

#include <stdio.h>
#include <stdlib.h>
#define p 10
int Top =  -1;
int main()
{
    int  a[p], n, i;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
        
        Top++;
    }

    if (Top == p - 1)
    {
        printf("The stack is full ");
        exit(0);
    }
    printf("Enter the data to be insert=");
    scanf("%d", &n);
    Top++;
    a[Top]=n;
    for(i=0;i<=Top;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}