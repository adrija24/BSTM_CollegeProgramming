#include <stdio.h>
int fun();
int main()
{
    int result = 0;
    result = fun();
    printf("The odd number series is %d ", result);
}
int fun()
{
    int num = 1, sum = 0;
    while (num <= 100)
    {
        sum = sum + num;
        num = num + 2;
    }
    return sum;
}