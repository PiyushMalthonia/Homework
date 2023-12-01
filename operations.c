#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum=%d\n",c);
    c=a-b;
    printf("Sub=%d\n",c);
    c=a*b;
    printf("Produt%d\n",c);
    c=a/b;
    printf("Div=%d\n",c);
    c=a%b;
    printf("Modulo=%d",c);
    return 0;
}