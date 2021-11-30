
// This program is not included in the assignment

#include <stdio.h>
#include <math.h>

int main()
{
    int num1 = 0, num2 = 0, count = 0, sum = 0;
    printf("Enter the number in decimal: \n");
    scanf("%d", &num1);
    while (num1 != 0)
    {
        num2 = num1 % 10;
        num1 = num1 / 10;
        sum = sum + num2 * (pow(2, count));
        count++;
    }
    printf("The decimal number is %d", sum);
}