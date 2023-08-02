#include<stdio.h>
#include<strings.h>
void main()

//     char A[12]="bittubanty";
//     int l=0,i=0;
    
//     while(A[i]!='\0')
//     {
//         l=l+1;
//         i++;
//     }
//     printf("The length of string =%d",l);
// }
// char A[10];
// int t;
// printf("enter the strings=");
// gets(A);
// t=strrev(A);
// printf("the reverse string=%s",t);
// }
{
    int l=0,i=0;
    char A[20];
    printf("enter the strings=");
    gets(A);
    while(A[i]!='\0')
    {
        l++;
        i++;
    }
    l--;
    printf("\n The reverse of string=");
    for(i=l;i>=0;i--)
    {
        printf("%s",A[i]);

    }
}
































