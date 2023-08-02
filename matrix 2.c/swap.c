#include <stdio.h>
void swap(int *a, int *b);
void main()
{
    int a, b;
    printf("enter the num a & b= ");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("\n After swap =\n");
    printf("\n a=%d", a);
    printf("\n b=%d", b);
}
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
