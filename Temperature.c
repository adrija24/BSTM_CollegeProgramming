#include <stdio.h>
#include<conio.h>

int main()
{
    //clrscr();
    float temp;
    printf("Enter the temperature in fahrenheit: \n");
    scanf("%f", &temp);
    printf("the temperature in celsius is %f", ((temp*5-32*5)/9));
    //getch();

   return 0;
}