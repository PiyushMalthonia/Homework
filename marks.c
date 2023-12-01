#include<stdio.h>
void main()
{
    int m;
    printf("Enter your marks:");
    scanf("%d",&m);
    char c,y,n;
    printf("Your handwriting:");
    scanf("%c%c",&c,&c);
    if(c=='y'||c=='Y')
    {
        m+=10;
    }
        printf("Your marks:%d",m);         
}