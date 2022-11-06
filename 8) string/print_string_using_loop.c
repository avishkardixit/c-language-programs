//here we are going to print an string ( array of charactors ) by using loop 


#include<stdio.h>
int main()
{
     //char str[] = "avishkar";//here we have stored the string in str[]
     char  str[] = {'a','v','i','s','h','k','a','r','\0'};

     char *ptr = str;// now the variabel ptr is storing the address of string that means 
                     // initialy it is pointing towards frist element of string 
    
     while(*ptr!='\0')// here we are given the condition for loop it will runs from first element of 
                      // string to the null charactor ( \0 ) which is the last charactor of string 
     {
         printf("%c",*ptr);
         
         ptr++;// these will continuasly increament the address 
     }

return 0;
}