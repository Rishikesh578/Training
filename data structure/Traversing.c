#include <stdio.h>
#include <ctype.h>

// void main()
// {
//     int a[10],n,i;
//     printf("enter the size of array=");
//     scanf("%d",&n);
//     printf("enter the element of array");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("element of array");
//     for(i=0;i<n;i++)
//     {
//         printf("%d",a[i]);
//     }
// }

#define postfixsize 50;
#define maxstack 50;
int top = -1;
int main()
{
    int i;
    char postfix[postfixsize];
    printf("enter the postfix expression: ");
    for (i = 0; i < postfixsize; i++)
    {
        scanf("%c", &postfix[i]);
    }
    if (postfix[i] == ')')
    {
        break;
    }
    evalpostfix(postfix);



//function


Evalpostfix(cha postfix[])
{
    char ch;
    int a, b, val;
    for (int i = 0; postfix[i] != ')'; i++)
    {
        ch = postfix[i];
        if (is digit(ch))
        {
            push(ch - '0');
        }
        else
        {
            if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                a = pop();
                b = pop();
            }
            switch (ch)
            {
            case '+':
                val = b + a;
                break;

            case '-':
                val = b - a;
                break;

            case '*':
                val = b * a;
                break;

            case '/':
                val = b / a;
                break;
            }
            push(val);
        }
    }
    printf("Result of expression=%d", pop());
}
push(int n)
{
    if (top > maxstack - 1)
    {
        printf("stack is fail");
    }
    else
    {

        top = top + 1;
        stack[top] = n;
    }
}


int pop()
{
    int t;
    if (top<0)
    {
        printf("stack is empty");
    }
    else
    {
        t=stack[top];
        top=top-1;
    }
    return(x);
    
    
}