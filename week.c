#include<stdio.h>
int main()
{
    int day = 0;
    printf("Enter the day: 1-7: ");
    scanf("%d" ,&day);
    switch(day)
    {
        case 1:
        printf("\nMonday");
        break;
        case 2:
        printf("\n Tuesday");
        break;
        case 3:
        printf("\n Wednesday");
        break;
        case 4:
        printf("\n Thursday");
        break;
        case 5:
        printf("\n Friday");
        break;
        case 6:
        printf("\n Saturday");
        break;
        case 7:
        printf("\n Sunday");
        break;
        default:
        printf("\nEnter proper input");
        break;
    }  
      return 0;
}

    