//in these program we are writing the 

#include<stdio.h>
#include<stdio.h>

struct emp 
{
 char name[50];
 int sallary;
}s[10];

int main()
{
int i;

 for(i=0;i<2;i++)
        {
          fflush(stdin);

          printf("employee name : ");
          gets(s[i].name);


          printf("sallary :");
          scanf("%d",&s[i].sallary);

       }


FILE *ptr;
ptr = fopen("bank_emp.txt","w");
for(i=0;i<2;i++)
{
fprintf(ptr,"%s,%d\n",s[i].name,s[i].sallary);



}



return 0;
}