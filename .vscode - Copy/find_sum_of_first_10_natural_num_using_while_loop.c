#include<stdio.h>
int main()
{
    int a= 0,sum = 0,n ;

    printf("enter the value of n :");
    scanf("%d",&n);

    while(a <= n)
    {
        sum += a;//here the sum will contunuasly get the value of a from
                 //1 to 10 and it continues to store the sum after every increament.
        a++;

       
        
    }printf("the value of sum is %d",sum);
    return 0;
}   