#include<stdio.h>
int main()
{
    FILE *name;//these is the pointer fot our file 

    name = fopen("demo_getc.txt","r");//these will open the file in pointer 

    char c= fgetc(name);//these will get charector from the file 

    char c2=fgetc(name);//these will get netx charector from our first 
                        //means file cant get one charector for again and again

    printf("my charector is : %c ",c);//these will print the charector from our file 
    fclose(name);//these will close the file 

    //now we will see fputc function 

    FILE *name2;

    name2 = fopen("demo_putc.txt","w");//these will open file in riting mode 
    fputc('z',name2);//these will print our charector in file its format is first charector and
                    //second the name of pointer where file is stored 
}