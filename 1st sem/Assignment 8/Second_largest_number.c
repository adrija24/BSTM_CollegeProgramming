#include <stdio.h>
int main()
{
  int i, arr[50], len, large, large2, p;
  printf("Enter the length of array: \n");
  scanf("%d", &len);
  printf("Enter the number for array input: \n");
  for (i = 0; i < len; i++)
  {
    scanf("%d", &arr[i]);
  }
  large = arr[0];
  for (i = 0; i < len; i++)
  {
    if (arr[i] > large)
    {
      large = arr[i];
      p = i;
    }
  }
  large2 = arr[len - p - 1];
  for (i = 0; i < len; i++)
  {
    if (i != p)
    {

      if (arr[i] > large2)
      {
        large2 = arr[i];
      }
    }
  }

  printf("Largest number is %d\n", large);
  printf("Position: %d", p);
  printf("Second Largest number is %d\n", large2);
}
