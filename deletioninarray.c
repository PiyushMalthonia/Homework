#include<stdio.h>
void main()
{
    int arr[30],i,num,loc;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    printf("Enter the elements %d: ",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index to delete: ");
    scanf("%d",&loc);
    while(loc<num)
    {
        arr[loc-1]=arr[loc];
        loc++;
    }
    num--;
    for(i=0;i<num;i++)
    {
        printf("\n%d ",arr[i]);
    }    
}