#include<stdio.h>
int main()
{
    int n,i;
    float num,maximum;
    //Get the number of elements from the user
    printf("Enter the numbers of elements");
    scanf("%d",&n);
    //Initiliaze the maximum number to smallest possible value
    maximum=-999999999;
    //Iterate through the numbers and find the maximum
    for(i=0;i<n;++i){
        printf("Enter number:");
        scanf("%f",&num);
        if(num>maximum){
            maximum=num;
        }
    }
    //Print the maximum number
    printf("Maximum number is: %2f/n", maximum);
    return 0;
}
