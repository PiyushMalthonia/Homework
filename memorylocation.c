#include<stdio.h>
void main()
{
    int a[10];
    printf("Enter 10 Elements \n");
    for(int i=0;i<10;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Given Array: ");
    for(int j=0;j<10;j++)
    {
        printf("%d ",a[j]);
    }
    printf("\nMemory Location: ");
    for(int k=0;k<10;k++)
    {
        printf("%d ",&a[k]);  
    }
}   
