#include<stdio.h>
void main()
{
    int a[100]={1,2,3,4,5,6,7,8,9,10},i;
    printf("Forward Order: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Reverse Order: ");
    for(int j=9;j>=0;--j)
    {
        printf("%d ",a[j]);
    }
}