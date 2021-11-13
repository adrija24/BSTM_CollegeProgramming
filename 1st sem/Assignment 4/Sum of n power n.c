#include <stdio.h>
#include <math.h>
int main()
{
    int num1 = 1, num2, sum = 0;
    printf("Enter the last number: \n");
    scanf("%d", &num2);
    while (num1 <= num2)
    {
        sum = sum + (pow(num1, num1));
        num1++;
    }
    printf("The sum of the series is %d", sum);
}