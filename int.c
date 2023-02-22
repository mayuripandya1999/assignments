//write a program find a simple interest.
#include<stdio.h>
int main()
{
    int p, t;
    float r, si;
    printf("Enter the principal amount");
    scanf("%d" ,&p);
    printf("Enter the rate of interest");
    scanf("%d" ,&r);
    printf("Enter the time period");
    scanf("%d" ,&t);
    si = (p * t * r)/100;
    printf("simple interest is : %f\n" , si);
    return 0;
}