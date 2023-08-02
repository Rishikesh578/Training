#include<stdio.h>
#include<stdlib.h>
#define max 10
void main()
{
    // int a[max]={3,5,7,9},ub,n;
    // //length of array
    // for (ub = 0; a[ub] != '\0'; ub++);
    // // ub = sizeof(a)/sizeof(a[0]);
    // ub=ub-1;
    // if(ub == max-1)
    // {
    //     printf("the array is already full ");
    //     exit (0);
    // }
    // printf("enter the element =");
    // scanf("%d",&n);

    // ub=ub+1;
    // a[ub]= n;

    // for(int i=0;i<=ub;i++)

    // {
    //     printf("%d",a[i]);
    // }

    //insert at begning
    
    int a[max]={3,5,7,9},ub,n;
    //length of array
    for (ub = 0; a[ub] != '\0'; ub++);
    // ub = sizeof(a)/sizeof(a[0]);
    ub=ub-1;
    if(ub == -1)
    {
        printf("the array is empty ");
        exit (0);
    }
    printf("enter the element =");
    scanf("%d",&n);

    ub=ub+1;
    for (int i = ub; i >= 0; i--) //0 is lowerbound here
    {
        a[i+1] = a[i];
    }
    a[0] = n;
    for (int i = 0; i <= ub; i++)
    {
        printf("%d",a[i]);
    }

//insert at given index or location
    
    int a[max]={3,5,7,9},ub,n;
    //length of array
    for (ub = 0; a[ub] != '\0'; ub++);
    // ub = sizeof(a)/sizeof(a[0]);
    ub=ub-1;
    if(ub == -1)
    {
        printf("The array is empty ");
        exit (0);
    }
    printf("Enter the element =");
    scanf("%d",&n);

    ub=ub+1;
    for (int i = ub; i >= 0; i--) //0 is lowerbound here
    {
        a[i+1] = a[i];
    }
    a[0] = n;
    for (int i = 0; i <= ub; i++)
    {
        printf("%d",a[i]);
    }
}