#include<stdio.h>
void main()
{
    int a,b,c,big,bg;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    big=a>b?a:b;
    bg=big>c?big:c;
    printf("The greater number is=%d",bg);
}