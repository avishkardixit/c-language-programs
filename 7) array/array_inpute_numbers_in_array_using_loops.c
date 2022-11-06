#include<stdio.h>
int main()
{
    int marks[10];
    // these is the loop for getting values in array (input the values )
    for(int i = 0; i<10;i++)//our counting will start from 0 and go upto 9
    {
        printf("enter the value of marls for student  %d:",i+1);//here starting is from zero hence 
                                                                // we have added 1 for doing the 
                                                                //correction and start from 1
                                                                //hence value start at student one 
        
        scanf("%d",&marks[i]);//here what value we will enter will be stored in corresponding value of i

    }
   // these loop will exicute the marks of the students
   for(int i = 0; i < 10 ; i++)
   {
       printf("the marks of student %d is %d \n",i+1,marks[i]);
   }
    return 0;
}