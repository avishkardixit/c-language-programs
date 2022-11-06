//we are righting logic to add two numbers using fuction
#include<stdio.h>
int add(int a,int b);//it means int add is a function which will 
                     //take a and b as input and return the output

int main()
{  
    int x,y;
      printf("enter the first number");
      scanf("%d",&x);     
      printf("enter the second number");
      scanf("%d",&y);
    add(x,y);
    return 0;
}
 
 int add(int a,int b)
 {
     printf("%d",a+b);
 }