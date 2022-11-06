//here we are tring two simplify our program 
//replacing "(*ptr).x" with "ptr->x" and
//replacing "(*ptr).x" with "ptr->y"


#include<stdio.h>
int main ()
struct vector
{
   int x;
   int y;


};
{
   struct vector v1 ;
   struct vector *ptr;
   
   v1.x=45;
   v1.y=60;

   ptr=&v1;
   printf("%d\n",ptr->x);
   printf("%d\n",ptr->y);

  



}
