#include <stdio.h>
int small_number();
int main()
{
    int result = 0;
    result = small_number();
    printf("The smallest number is %d", result);
}
int small_number()
{
    int num1 = 0, num2 = 0, num3 = 0, r = 0;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 < num2 && num1 < num3)
    {
        return num1;
    }
    if (num2 < num1 && num2 < num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}