#include <stdio.h>
int swap(int a);
int main()
{
    int num = 0, s = 0, result = 0;
    printf("Enter a number:\n");
    scanf("%d\n", &num);
    result = swap(num);
    printf("The result is %d", result);
}
int swap(int num)
{
    int num1 = 0, rev = 0;
    while (num != 0)
    {
        num1 = num % 10;
        num = num / 10;
        rev = rev * 10 + num1;
    }
    return rev;
}