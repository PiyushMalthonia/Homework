#include<stdio.h>
#include<math.h>
void main()
{
    int l=44,b=56,area;
    float r;
    area=l*b;
    printf("Area of rectangle=%d\n",area);
    r=sqrt(area/3.14);
    float peri;
    peri=2*3.14*r;
    printf("Perimeter of circle=%f",peri);
}