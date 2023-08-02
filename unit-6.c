#include<stdio.h>
// void main()
// {
//     int roll;
//     char name[30];
//     float marks;
//     FILE *fp;
   
//     fp = fopen("student.txt","w");
//     if(fp==NULL)
//     {
//         printf("The file is not exist");
//         exit(1);
//     }
//     else
//     {
//         printf("enter the student roll,name,marks");
//         scanf("%d%s%f",&roll,&name,&marks);
//         printf("\n The details of student =\n");
//         printf("\n The Roll num of student=%d",roll);
//         printf("\n The name of student =%s",name);
//         printf("\n The marks of student=%f",marks);

//         fprintf(fp,"roll:%d,name:%s , marks:%f",roll,name,marks);
//     }
//     fclose(fp);

// }

// --------------------------------------------------------------

// void main()
// {
//     char c;
//     FILE *ptr = NULL;
//     ptr= fopen("myfie.txt","w");
//     c= fgetc(ptr);
//     printf("The character I read was %c\n",c);
// }

void main()
{
    FILE *T;
    char ch,A[30];
    int i=0;
    T= fopen("input","w");
    if(T==NULL)
    {
        printf("The file is not exist=");
        exit(1);
    }
    printf("Enter the string=");
    scamf("%s",&A);
    while(A[i]!='\0')
}