#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0, store = 0, rev = 0;
    printf("Enter the number: \n");
    scanf("%d", &num1);
    store = num1;
    while (num1 != 0)
    {
        num2 = num1 % 10;
        num1 = num1 / 10;
        rev = rev * 10 + num2;
    }
    if (rev == store)
    {
        printf("This is a palindrome number.");
    }
    else
    {
        printf("This is not a palindrome number.");
    }
}