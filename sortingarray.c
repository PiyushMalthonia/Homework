#include<stdio.h>
void main()
{
    int n,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
             
        }
    }
    printf("Sorted Array: ");
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
}