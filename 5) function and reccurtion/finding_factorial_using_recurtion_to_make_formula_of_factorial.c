//these is the example of recurtion where our factorial fuction will get
// reuction when it calles itself in it just like a loop 

#include<stdio.h>


int factorial(int x);//here we have initiated the fuction of factorial

int main()
{
    int a;
    printf("enter the value :");
    scanf("%d",&a);
    printf("the factorial of %d is %d",a,factorial(a));//here we have used our fuction
                                                    // and called it here
    return 0;
}

int factorial(int x)//here we have written what does our fuction will do

{
    if(x==0 || x==1)//we know that the factorial of 1 and 0 is 1 hence we have created
                    // that condition in if and when our fuction will get values of x 
                    //as '1' or '0' then it will exicutes the if condition 
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);//in the else condition we have written the 
                                  //factorial of our value by simply multiplying our value 
                                  //with factorial of its nearest lower number and aslo
                                  // the factorial of the nearest lower number will be find 
                                  //out by multiplying that lower number by its lower number 
                                  // and these chain will be continued so on 

             //note if we have to calculate factorial of 5 our program will do
             // factorial(5)= 5 x factorail (5 - 1) = 5 x factorial (4)
             // factorail(4)= 4 x factorial (4 - 1) = 4 x factorial (3)
             // factorial(3)= 3 x factorial (3 - 1) = 3 x factorial (2)
             // factorial(2)= 2 x factorial (2 - 1) = 2 x factorial (1)
             // factorial(1)= 1
             //hence by combining these equations our program will get 
             //factorial(5)= 5 x 4 x 3 x 2 x 1

                                   

    }
}