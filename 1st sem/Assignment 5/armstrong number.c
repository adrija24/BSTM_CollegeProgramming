#include <stdio.h>
#include <math.h>

int main()
{
    int num1 = 0, num2 = 0, count = 0, store = 0, store2 = 0, sum = 0;
    printf("Enter the number: \n");
    scanf("%d", &num1);
    store = num1;
    store2 = num1;
    while (num1 != 0)
    {
        num1 /= 10; //  removes the last digit of a number
        count++;
    }
    while (store != 0)
    {
        num2 = store % 10;
        store = store / 10;
        sum = sum + (pow(num2, count));
    }
    if (sum == store2)
    {
        printf("This is an armstrong number.");
    }
    else
    {
        printf("This is not an armstrong number");
    }
}