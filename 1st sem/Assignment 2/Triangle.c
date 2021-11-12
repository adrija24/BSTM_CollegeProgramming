#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter three angles of a triangle: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 180)
    {
        printf("This triangle is valid.");
    }
    else
    {
        printf("This triangle is not valid");
    }

    return 0;
}
