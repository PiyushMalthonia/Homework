#include<stdio.h>
void main()
{
    int a[]={51,34,23,21,12};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}