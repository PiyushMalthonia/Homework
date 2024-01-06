include<stdio.h>
void fun();
register int a=55;
void main()
{
extern int a;
  {
    printf("inside block a=%d",a);
  }
printf("%d",a);
fun();
    static int a;
    b=++a;
  printf("coming from fun b=%d\n",b);
}