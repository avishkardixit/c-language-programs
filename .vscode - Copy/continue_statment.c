#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter the value of a:");
    scanf("%d",&b);

    for(a = 1 ; a <= 10 ; a++)
    {   if( a != 5)continue;//here the continue statment will give command to program 
                            // continue looping  withaut exicuting the output until the 
                            //condition for continue  statment is not false 
                            //hence here a is only one time is not equal to 5 hence 
                            //condition is false only at one time hence output will
                            //be shown only one times when the a is 5 .
        printf("%d x %d  = %d \n",b,a,b*a);
        
    }
    return 0;
}