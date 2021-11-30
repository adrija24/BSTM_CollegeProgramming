#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0, rem = 0, bin = 0, i = 0;
    printf("Enter the number: \n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 2;
        bin += rem * pow(10, i);
        num = num / 2;
        i++;
    }
    printf("The binary number is %d", bin);
}