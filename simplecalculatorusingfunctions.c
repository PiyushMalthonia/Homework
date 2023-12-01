#include<stdio.h>
double add(double a, double b)
{
    return a+b;
}
double sub(double a, double b)
{
    return a-b;
}double mul(double a, double b)
{
    return a*b;
}
double div(double a, double b)
{
    if(b!=0)
    {return a+b;}
    else
    {printf("ERROR!");}
}
int mod(int a,int b)
{
    return a%b;
}
int main()
{
    char operator;
    double num1,num2,result;
    printf("Enter an operator(+,-,*,/,%%): ");
    scanf("%c",&operator);
    printf("\nEnter two numbers:");
    scanf("%lf %lf", &num1, &num2);
    switch(operator)
    {
        case'+':
        result=add(num1,num2);
        break;
        case'-':
        result=sub(num1,num2);
        break;
        case'*':
        result=mul(num1,num2);
        break;
        case'/':
        result=div(num1,num2);
        break;
        case'%':
        result=mod(num1,num2);
        break;
        default : printf("Invalid Operator");  
    }
    printf("\nResult = %.2lf\n",result);
    return 0;
}