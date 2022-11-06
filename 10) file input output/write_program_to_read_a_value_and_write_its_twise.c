#include<stdio.h>
int main()
{ 
    int a;//here we have got and integer type variable tpo store the read value 
    FILE *ptr;//these is the pointer for file
    ptr = fopen("eg.txt","r");//here we have open file in read mode in our pointer 
    fscanf(ptr,"%d",&a);//here we have readed the value in file and stored it in the variable
    fclose(ptr);//here we have closed file 
    FILE *ptr2;//here we have got second pointer for opning file in write mode 
    ptr2 = fopen("eg.txt","w");//here we have opened the file second
                                // time in write mode to update its value 
    fprintf(ptr2,"%d",a*2);//here we have written the value in file with updating that value 

}