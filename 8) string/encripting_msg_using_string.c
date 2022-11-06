#include<stdio.h>
void encript(char *msg)
{
  char *ptr = msg; 
  while(*ptr!='\0')
  {
    *ptr=*ptr+1;//these will change the string into encripted string bye adding 1
                // in there ascci value 
    ptr++;
  }
}

int main()
{
    char msg[100]="shivam walke ";
    encript(msg);
    
    printf("%s",msg);
}