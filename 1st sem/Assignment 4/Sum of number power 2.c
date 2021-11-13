#include <stdio.h>
int main()
{
    int num1=1, num2, sum=0;
    printf("Enter the value of n-th number: \n");
   scanf("%d", &num2);
   while(num1<=num2)
   {
       sum= sum+(num1*num1);
       num1++;
   }
   printf("The sum of the series is %d", sum);
}