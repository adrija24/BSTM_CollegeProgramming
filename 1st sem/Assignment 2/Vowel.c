#include <stdio.h>
#include<conio.h>

int main()
{
    char charac;
    printf("Enter a character: \n");
    scanf("%c", &charac);
    if (charac == 'a' || charac == 'e'|| charac == 'i' || charac == 'o' || charac == 'u'||charac == 'A' || charac == 'E'|| charac == 'I' || charac == 'O' || charac == 'U')
    {
       printf("This is a vowel");
    }
    else
    {
        printf("This is a consonant");
    }
    return 0;
}