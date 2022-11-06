#include<stdio.h>
void decript(char *msg)
{
  char *ptr = msg; 
  while(*ptr!='\0')
  {
    *ptr=*ptr-1;//these will change the string into decrepted string bye subtracting 1
                // in there ascci value 
    ptr++;
  }
}

int main()
{
    char msg[100]="tijwbn!xbmlf!";
    decript(msg);
    
    printf("%s",msg);
}