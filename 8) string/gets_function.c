// here we are making the multy word string for these we need a 'gets' function exapt 'scanf' function
#include<stdio.h>
int main()
{
    char full_name[100];
    printf("enter your full name :");

    gets(full_name);// here we will directly store our input by gets function  

  

    printf("your full name is %s ",full_name);
}