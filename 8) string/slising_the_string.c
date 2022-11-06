//slicing string meance wee will print the part of the string wich we need 
//these function will break down our string in the part we need 

#include<stdio.h>

void slice(char *str,int a ,int b)//these will get the address of string and two integers 
{
    int i = 0;//it will start the loop with 0 
    while((i+a) < b)// these loop will run until the sum of i and a will become greater than b
    {
        str[i] =str[i+a];//these will change the value at i with value of at i+a
        i++;
    }
    str[i]='\0';//these wil complete the string by getting \0 after the complition of
                // our sliced string
}
int main()
{
   char str[]="avishkar";
   slice(str , 1, 7);//these will gives string and two integers to function 
   printf("%s",str);



}