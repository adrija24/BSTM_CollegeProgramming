#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    printf("Enter a year: \n");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("This year is a leap year!!!");
        }
        else
        {
            printf("This year is not a leap year.");
        }
        
    }
    else if (year % 4 == 0)
    {
        printf("This year is a leap year!!!");
    }

    else
    {
        printf("This year is not a leap year.");
    }

    return 0;
}
