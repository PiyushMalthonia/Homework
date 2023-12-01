#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,j,k;
    printf("Prime numbers till you want: ");
    scanf("%d",&n);
    if(n<=1)
    printf("Enter valid number ");
    for(i=1;i<=n;i++)
    {
        if(i==1||i==0)
        continue;
        k=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                k=0;
                break;
            }
        }
        if(k==1)
        printf("%d ",i);
    } 
    return 0;
}