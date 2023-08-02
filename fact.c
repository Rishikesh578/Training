#include<stdio.h>
#include<conio.h>

// int main()
// {
//     int n, f=1;
//     int *num, *fact;
//     // *fact = 1;
//     printf("Enter the no. whose factorial you want to find: ");
//     scanf("%d",&n);

//     num = &n;
//     fact = &f;

//     for (int i = 1; i <= n; i++)
//     {
//         *fact = *fact * i;
//     }

//     printf("Factorial of %d is %d",n,*fact);
    
//     return 0;
// }

int factorial(int n, int *fact)
{
    *fact = 1;
    for (int i = 1; i <= n; i++)
    {
        *fact = *fact * i;
    }


}

// int main()
// {
//     int n, fact;
//     printf("Enter the no. whose factorial you want to find: ");
//     scanf("%d",&n);

//     factorial(n, &factorial);
//     printf("Factorial of %d is %d", n, *fact);
    
// }