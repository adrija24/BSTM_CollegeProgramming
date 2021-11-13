#include <stdio.h>
int main()
{
  int num1 = 1, num2 = 0, sum = 0, i = 1;
  printf("Enter the value of n-th number: \n");
  scanf("%d", &num2);
  while (i <= num2)
  {
    sum = sum + num1;
    num1 = num1 + 2;
    i++;
  }
  printf("The sum of the series is %d", sum);
}