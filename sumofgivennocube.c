#include<stdio.h>
#include<math.h>
int main()
{    
    int n,sum=0,digit,cube;
    int count;
    printf("Enter a number: ");
    scanf("%d",&n);
    count=0;
    int numbers=n;
    while(numbers!=0)
    {
        count++;
        numbers/=10;
    }
    printf("Digits:%d\n",count);
        printf("Number: %d\n",n);
    for(int i=1;i<=count;i++)
    {
        
        digit=n%10;
        cube=pow(digit,count);
        sum += cube;
        n/= 10;
    }
    printf("Sum of digits: %d\n",sum);
    return 0;
}