#include<stdio.h>
int sum(int *a,int *b);
void main()
{
    int a,b,c;
    printf("enter the num a & b=");
    scanf("%d%d",&a,&b);
    c=sum(&a,&b);
    printf("the sum of num=%d",c);
}
int sum(int *x,int *y)
{
    int t;
    t= *x + *y;
    return(t);
}