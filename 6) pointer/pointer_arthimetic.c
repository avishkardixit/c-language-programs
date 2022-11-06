//here we will see how the pointer get addition and substraction 
#include<stdio.h>
int main()
{
    int a = 3;
    int *ptr = &a;
    char c ='a';
    int *char_ptr = &c;
    printf("the value of ptr is %u\n\n",ptr);
    ptr++;//here the value will be increase by 4 because of integer stored the 4 bits of value
    printf("the value of ptr is %u\n\n",ptr);

    printf("the value of char_ptr is %u \n\n",char_ptr);
    char_ptr++;
    printf("the value of char_ptr is %u \n\n",char_ptr);
}