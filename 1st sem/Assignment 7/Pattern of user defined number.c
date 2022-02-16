#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int ans = 0;
    while (num != 0)
    {
        ans = ans * 10 + (num % 10);
        num /= 10;
    }
    int n = ans;
    int ans1 = 0;
    while (n != 0)
    {
        ans1 = ans1 * 10 + (n % 10);
        n /= 10;
        printf("\n%d", ans1);
    }
    return 0;
}