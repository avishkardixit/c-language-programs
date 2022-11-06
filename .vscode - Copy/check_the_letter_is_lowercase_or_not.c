#include <stdio.h>
int main()
{
    //the ASCII code for lowercase letters are lie between 97 - 122
    char a;

    printf("enter the charactor");
    scanf("%c", &a);

    if (a <= 122 && a >= 97)
    {
        printf("the charector is lowercase");
    }
    else
    {
        printf("the charector is uppercase");
    }
    return 0;
}