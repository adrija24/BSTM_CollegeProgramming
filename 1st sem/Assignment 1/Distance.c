#include <stdio.h>
#include<conio.h>

int main()
{
    clrscr();
    float dis;
    printf("The distance between two cities is: \n");
    scanf("%f", &dis);
    printf("Distance in cm is %f\n", dis*100000);
    printf("Distance in m is %f\n", dis*1000);
    printf("Distance in ft is %f\n", dis*3280.84);
    printf("Distance in inch is %f\n", dis*39370.08);
    getch();

    return 0;
}