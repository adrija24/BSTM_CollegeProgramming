#include <stdio.h>
int fun(int, int);
int main()
{
    int ran = 0, num = 1;
    printf("Enter the range:\n");
    scanf("%d", &ran);
    printf("The series is like following: \n");
    fun(num, ran);
}
int fun(int num, int ran)
{
    int result, i = 1;
    while (i <= ran)
    {
        printf(" %d", num);
        num = num + 3;
        i++;
    }
}