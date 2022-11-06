#include<stdio.h>
int main()
{
    int a = 300;
    int *add_a ;
    int **add_add_a ;//we have made these variable to store the address of address so we need to stars

    add_a = &a;
    add_add_a = &add_a;

    printf("the address of the a is %u\n\n",add_a);

    //now

    printf("address of the address of a is %u\n\n",add_add_a);

    // now we call the value bye the address of the address of give variable

    printf("the value of a is %d",**add_add_a);//it will redirect to the adrees of a and then address 
                                               // of a will redirect it to a by double star
    return 0;
}