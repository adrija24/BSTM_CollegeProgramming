#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0, sum = 0;
    printf("Enter the number: \n");
    scanf("%d", &num1);
    while (num1 != 0)
    {
        num2 = num1 % 10;
        num1 = num1 / 10;
        sum = sum + num2;
    }
    printf("The sum of digits is: %d", sum);
}
//palindrom number should be done in another program....
