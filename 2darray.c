#include<stdio.h>
void main()
{
    int a[3][3],i,j,sR=0,sC=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("enter the element:a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
    }
}
           for(i=0;i<3;i++)
        {
           sR=sC=0;
           for(j=0;j<3;j++)
        {
            sR=sR+a[i][j];
            sC=sC+a[j][i];   
}
printf(\n"%d:sR=%d and %d:sC=%d",i,sR,i,sC);
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)    
{
    printf("%d",a[i][j]);
}
}