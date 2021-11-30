#include <stdio.h>

int main()
{
    int num1 = 2, num2 = 0, i = 1, sum = 0;
    printf("Enter the number: \n");
    scanf("%d", &num2);
    while (i <= num2)
    {
        sum = sum + (num1 * num1);
        num1 = num1 + 2;
        i++;
    }
    printf("The sum of the series is %d", sum);
}