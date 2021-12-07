#include <stdio.h>
#include <math.h>
int fact(int a);
void main()
{
    int f = 0, r = 0;
    printf("enter digit:");
    scanf("%d", &f);
    r = fact(f);
    printf("result:%d", r);
}
int fact(int f)
{
    int l, n = 1;
    for (l = 1; l <= f; l++)
    {
        n = n * l;
    }
    return n;
}