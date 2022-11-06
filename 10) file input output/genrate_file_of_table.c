#include<stdio.h>
int main()
{
    FILE *table;//pointer for file 
    int a;// storing integer for table  

    printf("enter the number : " );// these will get the value for which we will create table
    scanf("%d",&a);

    table = fopen("table.txt","w");//we have opend the file in table pointer 
    
    
    for(int i = 0 ; i <10 ; i++)
    {
        fprintf(table,"%d x %d = %d\n",a,i+1,a*(i+1));
    }
    fclose(table);

}