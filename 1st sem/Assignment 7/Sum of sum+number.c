#include <stdio.h>
int sum(int, int);
int main()
{
   int ren = 0, num = 1;
   printf("Enter the range: \n");
   scanf("%d", &ren);
   sum(num, ren);
}
int sum(int num, int ren)
{
   int sum = 0;
   while (num <= ren)
   {
      sum = sum + num;
      num++;
   }
   printf("The sum of the series is %d", sum);
}