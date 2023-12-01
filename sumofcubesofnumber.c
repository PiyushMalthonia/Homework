#include<stdio.h>
int main()
{    
    int n,sum=0,digit,cube;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        cube=digit*digit*digit;
        sum += cube;
        n/= 10;
    }
    printf("Sum of digits: %d\n",sum);
    return 0;
}