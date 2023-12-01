#include<stdio.h>
void main()
{
    int a;
  printf("Enter Your Age : ");
  scanf("%d",&a);
  if(a>=18&&a<=50)
  {
    if(a>=18&&a<=25)
    {
        printf("You are eligible for grade 1 job");
    }
    else
    {
        printf("You are eligible for grade 2 job");
    }
  }
  else
  {
    printf("You are not eligible for the job");
  }
}