// #include <stdio.h>
// void main()
// {
/*
int a,*b;
a=5;
b=&a;
printf("%d",*b);
getch();
}


int x = 5, y, *z;
y = ++x + x++;
z = &y;
printf("%d%d%d", &z, *(&z), *z);*/
// int i, A[10], c = 0;

// for (int i = 0; i < 10; i++)
// {
//   printf("enter the no.: ");
//   scanf("%d", &A[i]);
// }

//  for (int i = 0; i < 10; i++)
// {
//   printf("%5d",A[i]);
// }

//   for (i = 0; i < 10; i++)
//   {
//     if (A[i] % 2 == 0)
//     {
//       printf("%d, ", A[i]);
//       c = c + 1;
//     }
//   }
//   printf("the total even num=%d", c);
// }
#include <stdio.h>
void main()
{
  int A[10], t, i;
  for (i = 0; i < 10; i++)
  {
    printf("Enter the elements=");
    scanf("%d",&A[i]);
  }
  printf("The array are=\n");
  for (i = 0; i < 10; i++)
  {
    printf("%5d", A[i]);
  }
  t = A[1];
  A[1] = A[9];
  A[9] = t;

  printf("\nThe array after exchange=\n");
  for (i = 0; i < 10; i++)
  {
    printf("%5d",A[i]);
  }
}
