//write a program to convert year into days and days into year.
#include<stdio.h>
int main()
{
    int year;
    int days;
    printf("Enter the year");
    scanf("%d",&year);
    printf("Enter the days");
    scanf("%d",&days);
    if (year % 4 == 0)(days % 30 == 0);
    printf("%d is year to days\n");
    if (days % 31 == 0)(year % 400 == 0);
    printf("%d is days to year\n"); 
    return 0;
}