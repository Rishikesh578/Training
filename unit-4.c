#include<stdio.h>
#include<conio.h>
#include<string.h>

// struct sum
// {
//     int a;
//     int b;
//     int c;
// };
// void main()
// {
//     struct sum k;
//     printf("enter the num=");
//     scanf("%d%d",&k.a,&k.b);
//     k.c=k.a+k.b;
//     printf("sum=%d",k.c);
// }
// ----------------------------------------------------------------
// struct student
// {
//     char Name[20];
//     int Rollno ;
//     int Age;
//     char Address[20];
// };


// void main()
// {

//     struct student s;

//     printf("Enter the student name=");
//     scanf("%s",&s.Name);
//     printf("enter the Roll no=");
//     scanf("%d",&s.Rollno);
//     printf("Enter the Age=");
//     scanf("%d",&s.Age);
//     printf("Enter the Address=");
//     scanf("%s",&s.Address);


//     printf("\n The details of the student=");
//     printf("\n The student name =%s",s.Name);
//     printf("\n The student Roll no=%d",s.Rollno);
//     printf("\n The student Age=%d",s.Age);
//     printf("\n The student Address=%s",s.Address);
// }

  //  There is a problem with me the program of union is not understand by banty

// union student                             
// {
//     int Roll;
//     char Name[20];
//     int Age;
//     char Address[15];
// };
// void  main()
// {
//     union student s;
//     printf("Enter the age of student= ");
//     scanf("%d",&s.Age);
//     printf("Enter the  student name=");
//     scanf("%s",&s.Name);
//     printf("Enter the address of student= ");
//     scanf("%s",&s.Address);

//     printf("\n The name of student =%s\n",s.Name);
//     printf("\n The age of student =%d\n",s.Age);

//     printf("\n The address of student =%s",s.Address);

// }

// struct book
// {
//     char B_Name[20];
//     char Author[20];
//     int page;
//     float price;
//     char Edition[10];
// };
// void main()
// {
//     struct book *s;
//     printf("Enter the book name=");
//     scanf("%s",&s->B_Name);
//     printf("Enter the author name=");
//     scanf("%s",&s->Author);
//     printf("Enter the num of page=");
//     scanf("%d",&s->page);
//     printf("Enter the price=");
//     scanf("%f",&s->price);
//     printf("Enter the Edition=");
//     scanf("%s",&s->Edition);

// printf("\n The record of book=");
// printf("\n The book name=%s",s->B_Name);
// printf("\n The Author Name=%s",s->Author);
// printf("\n The Num of pages=%d",s->page);
// printf("\n The price of book =%f",s->price);
// printf("\n THe Edition of book=%s",s->Edition);
// }
// #include<stdio.h>
// struct student 
// {
//   char Name[20];
//   int Rollno;
//   int id ;
// };
// struct student T;
// void main()
// {
//   printf("Enter The student name= ");
//   scanf("%s",&T.Name);
//   printf("Enter the Rollno=");
//   scanf("%d",&T.Rollno);
//   printf("Enter the id ");
//   scanf("%d",&T.id);

//   printf("\n The details of student=\n");
//   printf("\n The student name=%s",T.Name);
//   printf("\n The student id=%d",T.id);
//   printf("\n The Student Roll num=%d",T.Rollno);


// }
// #include<stdio.h>
// #define product(x) (x*x)
// void main()
// {
//     int i,j,k;
//     i=3;
//     j=product(i++);
//     k=product(++i);
//     printf("%d",i);
//     printf("\n%d",j);
//     printf("\n%d",k);
// }

// #include<stdio.h>
void main()
{
    int A[]={1,2,3,4,5};
    int i=1,j=2;
    printf("%d\n",*(A+1+i)); //3
    printf("%d\n",*(A+*(A+1)));//3
    printf("%d\n",*(A+j)); //3
    printf("%d\n",(A+i)+*(A+j)); //if base address is 6001 then 6001+1 + 3
}
