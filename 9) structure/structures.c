//stucture is used for getting new user define data type which can contain any values ,integer ,
//float ,string etc. 

#include<stdio.h>
#include<string.h>//for getting strcpy function

struct employee//it is just like the function as it is also alocated or defined before main 
    {
        int number ;
        float salary;
        char name[10];
    };

int main()
{
    
    struct employee e1;//here struct employee is a data type and e1 is variable as we defined it 
    
    e1.number = 100;          
    e1.salary = 20000.00;
    strcpy(e1.name,"avishkar");

    printf("%d\n",e1.number);
     printf("%.2f\n",e1.salary);
     printf("%s",e1.name);//%s for string 





}
