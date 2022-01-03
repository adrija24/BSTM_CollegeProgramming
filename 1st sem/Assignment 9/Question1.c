#include <stdio.h>
void main()
{
    int arr[50], i = 0, n = 0, num = 0, pos = 0, flag = 0;

    printf("Enter array range:\n");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to be found:\n");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            pos = i;
        }
    }
    if (flag == 1)
    {
        printf("The position of the number is: %d \n", pos);
    }
    else
    {
        printf("Not found!");
    }
}