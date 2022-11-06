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
    struct student e1;//we had made the variable e1 in the data type struct student 
    struct student *ptr;//we have made a pointer in the data type struct student 

    ptr = &e1;//here we have assign the address of e1 in ptr 
   (*ptr).sid=101;//here we derefrence the address to value bye using star before address variable
    
    printf("%d",e1.sid);
   



}