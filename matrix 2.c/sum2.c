#include<stdio.h>
float sum(float *a,float *b);
void main()
{
    float a,b,c;
    printf("enter the num a & b=");
    scanf("%f%f",&a,&b);
    c=sum(&a,&b);
    printf("The sum=%f",c);
}
float sum(float *x,float *y)
{
float t;
t= *x + *y;
return(t);
}