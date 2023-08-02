#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i,n,n1,a[10];

    printf("enter the no of elemnt\n");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  
  printf(" the element of\n ");
    for(i=0;i<n;i++)
  {
      printf("%d",a[i]);
  }
  printf("\n enter the element to search\n");
  scanf("%d",&n1);
  for(i=0;i<n;i++)
  {
      if(a[i]==n1)
        {
      printf("element exist at index %d  is %d \n",i ,a[i]);
      getch();
      //return 0;
      exit(0);
        }
  }
  
  printf("\n element  does not exist");
  getch();
    return 0;
}
