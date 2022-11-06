#include<stdio.h>
int main()
{
    FILE *read;
    FILE *write;
  
    read = fopen("read.txt","r");
    write = fopen("write.txt","w");
    char c = fgetc(read);
    

    while(c!=EOF)
    {
        fputc(c,write);
        fputc(c,write);
        
        c = fgetc(read);

  
    }
    
   
}