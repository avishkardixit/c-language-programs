#include<stdio.h>
#include<string.h>
struct student
{
    int sid;
    char name[100];
    float percentage;

};
int main()
{
   struct student new_arts[100];
   new_arts[0].sid=1;
   strcpy(new_arts[0].name,"avishkar dixit");
   new_arts[0].percentage=99.99;

   printf("the name of student is : %s\n",new_arts[0].name);
   printf("the sid of student is  : %d\n",new_arts[0].sid);
   printf("the precentage of student is : %.2f\n",new_arts[0].percentage);


}