#include<stdio.h>
int main()
{
    int add(int,int); // Function Declaration (Argument)
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=add(a,b); // Function Call
    printf("Sum: %d",c);
    return 0;
}
    int add(int x,int y) //
{
    int z=x+y;
    return z;
}