#include<stdio.h>
int main()
{
    int a;
    puts("enter your age :");
    scanf("%d",&a);

    if(a>=18 && a<=70)
    {
        puts("you can drive ");
    }
    else
    {
        puts("you can not drive ");
    }
    return 0;
}