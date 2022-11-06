#include<stdio.h>
int main()
{
    
    int b;
    int factorial = 1;
     
    printf("enter the number :");\
    scanf("%d",&b);

    for(int a =1 ; a <= b ; a++)
    {
       
        factorial *= a ;//here multiply equal to stores the value of multiplication after each 
                        //increament and hence factorial is multiplication of 
                        //first n natural numbers
    }
    printf("the factorial of  %d is %d",b,factorial);
    return 0;
}