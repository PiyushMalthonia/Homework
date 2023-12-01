#include<stdio.h>
int main()
{
    int a[100][100];
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the matrix: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
    printf("The entered matrix is: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }    
    return 0;
}