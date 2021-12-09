#include <stdio.h>
int main()
{
   int i, arr[50], n, large,p;
   printf("Enter the number: \n");
   scanf("%d", &n);
   for(i=0;i<n; i++)
   {
     scanf("%d", &arr[i]);
   }
   large = arr[0];
   for(i =1; i<n; i++)
   {
       if (arr[i] > large)
       {
           large = arr[i];
           p = i;
       }

   }
   printf("Largest number is %d\n", large);
   printf("Position: %d", p);
}

