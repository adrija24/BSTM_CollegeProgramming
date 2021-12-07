#include <stdio.h>
int area(int a);
int main()
{
  int len = 0, result = 0;
  printf("Enter the length of a square:\n");
  scanf("%d", &len);
  result = area(len);
  printf("The area of the square is %d", result);
}
int area(int len)
{
  int a;
  a = len * len;
  return a;
}