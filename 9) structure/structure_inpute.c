#include<stdio.h>
#include<string.h>//for strcpy function of string    
struct employee//it is just like the function as it is also alocated or defined before main 
    {
        int number ;
        float salary;
        char name[10];
    };
int main()
{
struct employee e1, e2 , e3;

printf("enter the number of employee e1 :");
scanf("%d",&e1.number);
printf("enter the salary of the employee e1 :");
scanf("%.2f",&e1.salary);
printf("enter the name of employee e1 :");
scanf("%s",&e1.name);

printf("enter the number of employee e2 :");
scanf("%d",&e2.number);
printf("enter the salary of the employee e2 :");
scanf("%.2f",&e2.salary);
printf("enter the name of employee e2 :");
scanf("%s",e2.name);

printf("enter the number of employee e3 :");
scanf("%d",&e3.number);
printf("enter the salary of the employee e3 :");
scanf("%.2f",&e3.salary);
printf("enter the name of employee e3 :");
scanf("%s",e3.name);


}