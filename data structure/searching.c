#include<stdio.h>
void main()
{
    int i,n,a[8]={1,2,3,4,5,6,7,8};
    printf("enter the element to search=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(a[i]==7)
        {
          printf("The element of the array is found=%d",i);
          break;
        }
    }

    if(i==n)
    {
        printf("The element is not found");
    }
}