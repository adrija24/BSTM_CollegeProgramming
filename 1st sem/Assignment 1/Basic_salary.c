#include <stdio.h>
#include<conio.h>

int main()
{
   clrscr();
   int sal;
   printf("Enter the basic salary of Ramesh: \n");
   scanf("%d", &sal);
   printf("D.A. of his basic salary is %d\n", (40*sal)/100); 
   printf("House rent of his basic salary %d\n", (20*sal)/100);
   printf("His gross salary is %d \n", sal + (40*sal)/100 + (20*sal)/100);
   getch();
   return 0;
}
