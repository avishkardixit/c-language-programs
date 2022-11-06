#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int roll_no;
    float percentage;

};

int main()
{  
    struct student s1;
    strcpy(s1.name,"avishkar dixit");
    s1.roll_no = 1;
    s1.percentage =78.8;

    printf("%s",s1.name);
}
