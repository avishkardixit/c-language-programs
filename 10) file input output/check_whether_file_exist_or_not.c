//in a read mode when file does not exist then the fopen function will
// written the NULL charector whith the help of these we will find that file exists or not 

//@note : when it will fopen in write function it will create the file if it does not exist 
 
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("samle.txt","r");
    if(ptr == NULL)
    {
        printf("file does not exist ");
    }
    
    return 0;
}