#include<stdio.h>
int main()
{
    int a = 2;
    int *b = &a;//these will stores the address of a
    printf("the address of a is %u \n\n",&a);
    printf("the value at address *a is %d\n\n",*b);
    printf("the address of *b is %u\n\n",&*b);//these will shows address of address 

    return 0;
}