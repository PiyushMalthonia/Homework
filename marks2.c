#include<stdio.h>
void main()
{
    int m;
    printf("Enter your marks:");
    scanf("%d",&m);
    char c,y;
    printf("Is your handwriting good Y/N:");
    scanf("%c%c",&c,&c);
    if(c=='y'||c=='Y')
    {
        m+=10;
    }
    else
    {
        m-=10;
    }     
    printf("Your Marks:%d",m);    
}