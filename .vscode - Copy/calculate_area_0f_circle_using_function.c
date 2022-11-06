#include<stdio.h>
 
int area(int side);//here ve have initiated a variable with name area 
                   //which takes input as a integer in variable called sise

int main()
{   
    int a;
    printf("length of the side of squaare is :");// here we have get input
                                                // from user and store it in "a" variable 
    scanf("%d",&a);
    area(a);//here we have called the fuction to do operation on "a" variable
    return 0;
}

int area(int side)//here we have decleared what  our finction will do after calling it in main
{
    printf("the area of square is %d",side*side);//here these is a output statment of fuction
                                                  //which will be exicuted when it will get 
                                                  // called in function.
}