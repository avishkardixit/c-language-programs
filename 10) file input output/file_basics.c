//here we are going to open a file in c 

#include<stdio.h>
int main()
{
    FILE *ptr;//these is a file pointer 
    ptr = fopen("sample.txt","r");//here we have opend file by fopen function in reading mode
    ptr = fopen("sample2.txt","w");//here we have opend file by fopen function in writing mode 

    //note comment down one method and run it it is example for that we have given both
    return 0;
}