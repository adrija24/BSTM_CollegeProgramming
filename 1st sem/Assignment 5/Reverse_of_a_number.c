#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0, rev = 0;
    printf("Enter the number: \n");
    scanf("%d", &num1);
    while (num1 != 0)
    {
        num2 = num1 % 10;
        num1 = num1 / 10;
        rev = rev * 10 + num2;
    }
    printf("The reverse form is: %d", rev);
}