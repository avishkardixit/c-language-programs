#include<stdio.h>
int main()
{//we simply check whether the nubmer is prime or not by finding can any number leaves the 
 //reminder zero when the dvides our given number exepts 1 and the number itself
 //so we will make the loop of that values from 2 to given numbers  nearest smaller number
 //and check the remineder  
    int a;
    int prime = 1;
    int i = 2;

    printf("enter the number :");
    scanf("%d",&a);
     
    while(i < a )//here these loop run from 2 to the a-1 number 
    {
        if(a%i==0)// these will check whether any number is divides our number  with reminder zero 
        prime = 0;
        
        break;
        i++;
       
    }
    if(prime == 0)
    {
        printf(" %d is not a prime number",a);

    }
    else
    {
        printf(" %d is a prime number ",a);
    }
    return 0 ;
}