//here we are adding two vectors meanse its x coardinate will add with x and y with y

#include<stdio.h>

struct vector//it is a structure wich defines data type of vector
{
   int x;
   int y;
};
struct vector VectorSum(struct vector v1, struct vector v2)//it is the structure of 
                                                           //function that can add two vectors
                                                           //and written the result
{
    struct vector result;
    result.x = v1.x+v2.x;
    result.y = v1.y+v2.y;
    return result;

};
int main ()
{
   struct vector v1 ,v2 ,sum ;
   v1.x=78;
   v1.y=67;
   printf("x dimention is %d and y dimention is %d \n",v1.x,v1.y);

   v2.x=7845;
   v2.y=657;
   printf("x dimention is %d and y dimention is %d \n",v2.x,v2.y);

   sum = VectorSum(v1,v2);//here we have stored the values gain by the function in sum structure

   printf("the x dimention of sum vector is %d and y dimention of sum vector is %d",sum.x,sum.y);



}