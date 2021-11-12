#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num%5==0 && num%11==0)  
    {
        printf("This number is divisible by 5 and 11");
    }
    else
    {
        printf("This number is not divisible by 5 and 11");
    }
    
    
    return 0;
}
