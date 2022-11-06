//in these program sequence is very importent if we define function before the structure then it will 
//not work properly because order is important and when function is get called first it dont get knows
//from where the values have to taken

#include<stdio.h>
struct student 
{
    int roll_num;
    char name[100];
    float percentage;
};

void show(struct student s1)//here struct student is a data type like char and int so
                            // it is just taking the value of s1 
                            //note : struct employee is just a data type 
{ printf("%d\n",s1.roll_num);
    printf("%s\n",s1.name);
    printf("%.2f\n",s1.percentage);
}
   

int main()
{
    struct student s1 ={11,"avishkar dixit ",99.99};
    show(s1);//here s1 is variable of our defined struct student data type so we just have to 
             // pass the variable 
    
}