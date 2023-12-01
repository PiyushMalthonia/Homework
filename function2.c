#include<stdio.h>
void main()
{
    void add(); // Function Declaration (Argument)
    add(); // Function Call
}
    void add() //
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    int z=x+y;
    printf("Sum: %d",z);
}