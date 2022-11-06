#include<stdio.h>
int strlen(char *string );




int main()
{
    char name[45];
    printf("enter the string  :");
    scanf("%s",name);
    printf("the length of string is %d",strlen(name));
   return 0;
    
}
int strlen(char *string)
{
    char *ptr = string;//here ptr will get the address of the first digit and continuely loop towards 
                       //last number in our next loop and every time the loop get exicuted the 
                       //length variable keep adding 1 in itself hence it will get lenth of string at 
                       //end of the loop 
    int length = 0;
    while(*ptr !='\0')//these loop will run until ptr is not equal to '\0' which is the last charector 
                    //of any string we enter 
    {
        length++;//these will keep adding 1 with every next loop of ptr meanse it will take every 
                 //every element as a digit
        ptr++;//these will keep loop going upto last charector
    }
    return length;//these will return the value of length where the function is called
}