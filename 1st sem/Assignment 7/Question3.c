#include <stdio.h>
int fun();
int main()
{
    int result = 0, ran = 0, num = 1, store = 0;
    printf("Enter the range:\n");
    scanf("%d", &ran);
    printf("The series is like following: \n");
    while (num <= ran)
    {
        result = fun(num);
        printf("%d ", result);
        num++;
    }
}
int fun(int num)
{
    num = num * num * num;
    return num;
}