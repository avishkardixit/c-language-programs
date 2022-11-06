#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    printf("length of a side of square:");
    scanf("%d",&side);
    printf("the area of square with side %d is %f",side,pow(side,2));//here we have used 
                                                                     //function from math
                                                                     //library which will 
    //calculate the power of given value and we want square means second power hence we have 
    //written the 2 as a power 
    //*note*:the power fuction written the value in form of double hence we have to write %f                                                                 
    return 0;
}