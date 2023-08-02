#include<stdio.h>
int main()
{
    int n,i,A[10];
    for(i=0;i<10;i++)
    {
        printf("enter the num=");
        scanf("%d",&A[i]);
    }
    printf("enter the num to search");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(n==A[i]) 
        {
            printf("the num is found=%d",n);
            break;
        }
    }
    if(i==10)
    printf("The num is not found");

    return 0;
}