//these function will compare two strings and if they are same it will right '0' and 
//if they are not same then it will write positive or negative value 

//note : if first mismatching character of first string is less than
// second srting the it will write negetive and vaise vrsa it will write positive 

#include<stdio.h>
#include<string.h>

int main()
{
    char *name="avishkar dixit";
    char *address="sambhajinagar parner";
    int a = strcmp(name,address);//here 'a' is smaller than 's' hence it will write negative charactor 
    
    printf("%d",a);
    return 0;
}