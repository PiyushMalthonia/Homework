#include<stdio.h>
int main()
{
    float a=20,b=10,c=15;
    float r1,r2,r3;
    float r4=0;
    r1=a+b*c;
    r2=(a+b)*c/(a-b);
    r3=a-b/c-(a+b);
    r4=((a-b)/c);
    printf("Result 1:%f\nResult 2:%f\nResult 3:%f\nResult 4:%f",r1,r2,r3,r4);
}