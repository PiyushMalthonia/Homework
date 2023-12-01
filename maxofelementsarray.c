#include<stdio.h>
int main()
{
    int n,max;
    printf("Number of terms: ");
    scanf("%d",&n);
    int a[n];
    for(int j=0;j<n;j++)
    {
        printf("Term %d: ",j+1);
        scanf("%d",&a[j]);
    }
    max=a[0];
    int index = 0;
    for (int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }
    printf("Maximum of %d elements: %d\nIndex Number: %d",n,max,index);
}