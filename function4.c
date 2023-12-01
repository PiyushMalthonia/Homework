#include<stdio.h>
int add(int a,int b); // Function Declaration (Argument)
int sub(int a,int b);
void multi(int a,int b);
void div();
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("Sum: %d\n",c);
    c=sub(a,b);
    printf("Subtraction: %d\n",c);
    multi(a,b);
    div();
    return 0;
}
int add(int a,int b)
{
    int c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c=a-b;
    return c;
}
void multi(int a,int b)
{
    int c=a*b;
    printf("Multiplication: %d\n",c);
}
void div()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(b==0)
    {
        printf("Invalid Division!");
    }
    else{
    int c=a/b;
    printf("Division: %d\n",c);
    }
}