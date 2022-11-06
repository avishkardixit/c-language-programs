#include<stdio.h>
#include<string.h>
struct employee
{   
    char name[45];
    int id_no;
    float sallary;
};//must give the semi colan after declearation of structure 
int main()
{
struct employee e1;//at the time of call struct is nessasary before our variable
strcpy(e1.name,"avishkar dixit ");//these will take the string and copy it in the adress given 
e1.id_no=12;
e1.sallary=45000.60; 

struct employee e2;
strcpy(e2.name,"jaydeep gadakh");
e2.id_no=15;
e2.sallary=15000.60; 

struct employee e3;
strcpy(e3.name,"shivam walke ");
e3.id_no=20;
e3.sallary=20000.60; 



}