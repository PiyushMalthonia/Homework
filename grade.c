#include<stdio.h>
void main()
{
    int hindi,english,maths,science,socialscience,total,avg;
    char grade;
    printf("enter the marks for hindi,english,maths,science and socialscience");
    total=hindi+english+maths+science+socialscience;
    avg=total/5;
    if((avg>=90)&&(avg<=100))
    {
        grade='A';
        printf("you have scored:%c",grade);
    }
    else if ((avg>=80)&&(avg<=90))
    {
        grade='B';
        printf("you have scored:%c",grade);
    }
    else if((avg>=70)&&(avg<=80))
    {
        grade='C';
    printf("you have scored:%c",grade);
    }
    else if((avg>=50)&&(avg<=60))
    {
        grade='D';
        printf("you have scored:%c",grade);
    }
    else
    {
     printf("fail");
    }
}