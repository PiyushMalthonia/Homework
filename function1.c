#include<stdio.h>
void main()
{
    int add(); // Function Declaration
    int c;
    c=add(); // Function Call
    printf("Sum: %d",c);
}
    int add() //
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    int z=x+y;
    return z;
}