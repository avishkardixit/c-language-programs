#include<stdio.h>

#define ADD(a,b) (a+b)
#define SUB(a,b) (a-b)

int main()
{
    printf("addition    : %d\n",ADD(2,3));
    printf("subtraction : %d\n",SUB(10,9));
    
    return 0;
}