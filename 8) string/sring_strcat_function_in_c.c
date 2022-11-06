//these function is used to update the value of the string 

#include<stdio.h>
#include<string.h>
int main()
{
    char first_name[16] = "avishkar";
    char *last_name ="dixit";
    strcat(first_name,last_name);//here the value of first string will be updated with value of second
    printf("%s",first_name);
    return 0;
}