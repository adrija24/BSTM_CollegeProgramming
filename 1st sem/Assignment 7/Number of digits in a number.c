#include <stdio.h>
int main()
{
    int num, n = 0;
    printf("Enter any number:\n");
    scanf("%d", &num);
    while (num > 0)
    {
        num /= 10;
        n++;
    }
    printf("number of digits: %d", n);
    return 0;
}