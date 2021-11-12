#include <stdio.h>

int main()
{
    int num, num1, num2;
    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &num, &num1, &num2);

    if (num > num1 && num > num2)
    {
        printf("%d is the greatest number", num);
    }
    else if (num1 > num && num1 > num2)
    {
        printf("%d is the greatest number", num1);
    }
    else
    {
        printf("%d is the greatest number", num2);
    }
}