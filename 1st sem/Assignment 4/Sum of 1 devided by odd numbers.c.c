#include <stdio.h>
int main()
{
    int num1 = 1, num2 = 0, i = 1;
    float sum = 0.0;
    printf("Enter the value of n-th no: \n");
    scanf("%d", &num2);
    while (i <= num2)
    {
        sum = sum + (float)1 / num1;
        num1 = num1 + 2;
        i++;
    }
    printf("\nThe sum of the series is %f", sum);
}