#include <stdio.h>
// #include<conio.h>

int main()
{
   //clrscr();
   int Ben, Eng, Geo, Pol, His;
   printf("Enter your marks in Bengali: \n");
   scanf("%d", &Ben);
   printf("The percentage of your Bengali marks is %d\n", (Ben*100)/50);
   printf("Enter your marks in English: \n");
   scanf("%d", &Eng);
   printf("The percentage of your English marks is %d\n", (Eng*100)/50);
   printf("Enter your marks in Geography: \n");
   scanf("%d", &Geo);
   printf("The percentage of your Geography marks is %d\n", (Geo*100)/50);
   printf("Enter your marks in Polscience: \n");
   scanf("%d", &Pol);
   printf("The percentage of your Polscience marks is %d\n", (Pol*100)/50);
   printf("Enter your marks in History: \n");
   scanf("%d", &His);
   printf("The percentage of your History marks is %d\n", (His*100)/50);
   printf("Your aggregate marks is %f\n", (float)(Ben+Eng+Geo+Pol+His)/5);
   //getch();
   
   return 0; 
}