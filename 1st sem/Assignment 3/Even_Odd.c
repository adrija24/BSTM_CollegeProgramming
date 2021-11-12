#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number from 1 to 10: \n");
    scanf("%d", &num);
    switch(num)
    {
      case 1:
      printf("This is a odd number");
      break;
      case 2:
      printf("This is a even number");
      break;
      case 3:
     printf("This is a odd number");
     break;
     case 4:
     printf("This is a even number");
     break;
     case 5:
     printf("This is a odd number");
     break;
     case 6:
     printf("This is a even number");
     break;
     case 7:
     printf("This is a odd number");
     break;
     case 8:
     printf("This is a even number");
     break;
     case 9:
     printf("This is a odd number");
     break;
     case 10:
     printf("This is a even number");
     break;
     default:
     printf("You entered a wrong number");
     break;
    }
}