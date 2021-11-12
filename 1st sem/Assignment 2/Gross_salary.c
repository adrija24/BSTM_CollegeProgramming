#include <stdio.h>
#include <conio.h>

int main()
{
    int sal;
    printf("Enter your basic salary: \n");
    scanf("%d", &sal);
    if (sal <= 10000)
    {
        printf("Your gross salary is %d\n",sal + (80*sal)/100 + (20*sal)/100);
    }
    else if (sal <=20000)
    {
         printf("Your gross salary is %d\n",sal + (90*sal)/100 + (25*sal)/100);
    }
    else if (sal > 20000)
    {
         printf("Your gross salary is %d\n",sal + (95*sal)/100 + (30*sal)/100);
    }
    
    return 0;
}
