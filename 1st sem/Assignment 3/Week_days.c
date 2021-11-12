#include <stdio.h>
int main()
{
    int day;
    printf("Enter your choice for day: \n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("1 corresponds to Sunday");
        break;
    case 2:
        printf("2 corresponds to Monday");
        break;
    case 3:
        printf("3 corresponds to Tuesday");
        break;
    case 4:
        printf("4 corresponds to Wednesday");
        break;
    case 5:
        printf("5 corresponds to Thursday");
        break;
    case 6:
        printf("6 corresponds to Friday");
        break;
    case 7:
        printf("7 corresponds to Saturday");
        break;
    default:
         printf("Your input is not valid");
        break;
    }
}