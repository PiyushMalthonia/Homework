#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,j,sum=0;
    printf("Enter the number of terms you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=pow(i,3);
        printf("%d ",j);
        sum=sum+j;
    }
    printf("SUM:%d\n",sum);
    return 0;
}