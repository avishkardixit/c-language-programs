#include <stdio.h>
int main()
{
    int a;
    printf("enter your number :");
    scanf("%d",&a);

    if (a > 0)
    {
        printf("%d  is positive",a);
    }
    else
    {
        printf("%d is negative",a);
    }
    return 0;
}
