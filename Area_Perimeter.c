#include <stdio.h>
#include<conio.h>

int main()
{
    //clrscr();
    float len, wid, rad;
    printf("Enter the len of the rectangle: \n");
    scanf("%f", &len);
    printf("Enter the width of the rectangle: \n");
    scanf("%f", &wid);
    printf("The area of the rectangle is %f\n", len*wid);
    printf("The perimeter of the rectangle is %f\n", (len+wid)*2);

    printf("Enter the radius of the circle: \n");
    scanf("%f", &rad);
    printf("The area of the circle is %f\n", ((22*rad*rad)/7));
    printf("The perimeter of the circle is %f\n", (2*22*rad)/7);
    //getch();
   return 0;
}