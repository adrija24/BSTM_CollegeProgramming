// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {

//     int n;
//     printf("Enter the number:\n");
//     scanf("%d", &n);
//     // Complete the code to print the pattern.
//     for (int i = 1; i <= (n * 2) - 1; i++)
//     {
//         for (int j = 1; j < (n * 2) - 1; j++)
//         {
//             if (i == 1 || j == 1 || i == (n * 2) - 1 || j == (n * 2) - 1)
//             {
//                 printf("%d ",n);
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }









#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int c = n;
      // Complete the code to print the pattern.
      for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
            if(i == 1 ||  j == 1)
            {
                printf("%d ", n);
            }
            else if (i ==2 || j == 2)
            {
                printf("%d ", n-1);
            }
            else if(i == 3 || j == 4)
            {
                printf("%d ", n -2);
            }
            else if(i == 4 || j == 4)
            {
                printf("%d ", n-3);
            }
            
            
        }
        printf("\n");
      }
    return 0;
}