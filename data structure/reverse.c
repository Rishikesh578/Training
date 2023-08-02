#include<stdio.h>
#include<string.h>
int main(){
       char arr[100]="shubham beta";
       int l;
       l=strlen(arr);
       for (int i = l-1; i >= 0; i--)
       {
            printf("%c",arr[i]);
       }
       
  
}