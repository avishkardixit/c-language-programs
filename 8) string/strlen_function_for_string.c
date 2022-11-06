//strlen is the predifined function in c language which provides us the length of string 
//it is included in string.h library

#include<stdio.h>
#include<string.h>

int main()
{
    char *name="avishkar dixit";
    int a = strlen(name);//here in integer a we have stored length of our string by strlen function
    printf("the length of string name is : %d ",a);
    return 0;
}