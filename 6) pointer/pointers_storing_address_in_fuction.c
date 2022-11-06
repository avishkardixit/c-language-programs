#include<stdio.h>
 
float address(int a);

int main()
{
    int i = 5;
    printf("address of i is %u \n\n",&i);
    address(i);

}
 
float address(int a)
{   
    printf("adress of i in function is %u\n\n",&a);
}