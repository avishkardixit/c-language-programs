#include<stdio.h>
int main()
{
    FILE *full;//pointer for the file 
    
    full = fopen("demo_getc.txt","r");//opening file here in pointer 
    
    char c ;//we have get charector ton store the value of fgetc which latter we use in loop 
    
    c = fgetc(full);//here we had stored the value of fgetc in char variable c 
    
    while(c!=EOF)// EOF = "end of the loop" loop will run until the value of c 
                 //reaches the end of the file
    {
        printf("%c",c);
        c = fgetc(full);// these will stoes the value of c because of these loop will
                       // get the value of c to check that is the c equals to end of loop
    }
    return 0;
}