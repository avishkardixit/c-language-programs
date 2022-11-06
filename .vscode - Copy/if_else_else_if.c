#include<stdio.h>
int main()
{
   int a;
   printf("enter the number :");
   scanf("%d",&a);

   if(a==0)
   {
       printf("number is zero ");
   }
   else if(a==1)
   {
       printf("number is one");
   }
   else if(a==2)
   {
       printf("number is two ");
   }
   else
   {
       printf("number is not 1,2 or 3");
   }

}