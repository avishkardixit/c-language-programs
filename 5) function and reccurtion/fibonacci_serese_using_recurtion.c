//fibonacci sereis is the series were n th number is ontaiend by addin (n-1) term with (n-2)th term
//example is : sereis start with 0 and next number is 1 the 2 then 1+2 is 3 3+2 is 5 , 5+3 is 8
// 8+5 is 13 and so on .
#include <stdio.h>

int series(int fib);

int main()
{
    int a;
    printf("enter the number upto which you want to a fibonacci series :");
    scanf("%d", &a);
    printf("the fibonacci series is %d", series(a));
}

int series(int fib)
{
    if(fib == 1)
    {
        return 1;
    }
    else if(fib == 2)
    {
    return 1;
    }
    else 
    {
        fib = series(fib - 1) + series(fib -2);//here fib will find the series of (fib -1)th 
                                               //element and for that element it will find 
                                               //(fib -2)th element and these chain will continues
    //upto 1st term and hence it will find out all the terms upto first term and get our desired 
    //output by recurtion .
    //note** recurtion meanse geting the value of our requeid values succsiding lower value and 
    //for that value gaining the lower succiding value of lower value and so on to finding 
    //every requierd  value by a type of looping.                                                  
        return fib;
    }
}
