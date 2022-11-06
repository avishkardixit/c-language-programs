#include<string.h>
struct student
{
    int sid;
    char name[100];
    float percentage;

};
int main()
{
   struct student avishkar = { 1, "avishkar dixit ",99.99};//here in these method values will get 
                                                           //directly get stored in the order
  

   printf("the name of student is : %s\n",avishkar.name);
   printf("the sid of student is  : %d\n",avishkar.sid);
   printf("the precentage of student is : %.2f\n",avishkar.percentage);


}