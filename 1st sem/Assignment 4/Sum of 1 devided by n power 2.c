#include <stdio.h>
int main()
{
    int num1 = 1, num2;
    float sum = 0.0;
    printf("Enter the last number: \n");
    scanf("%d", &num2);
    while (num1 <= num2)
    {
        sum = sum + (1 / (float)(num1 * num1));
        num1++;
    }
    printf("The sum of the series is %f", sum);
}