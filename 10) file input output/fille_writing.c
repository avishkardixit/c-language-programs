//these os the program to write somthing in the file 

#include<stdio.h>
int main()
{
    FILE *write;// these is the pointer for file  

    write = fopen("writing_file.txt","w");//these will open the file in write pointer 
    int num = 100;
    fprintf(write,"the number is %d ",num);//with the help of fprintf we will write here and 
                                            //it will get printed in the file 
                                            //wich we have given
   
    fclose(write);//it will close the file here 

}