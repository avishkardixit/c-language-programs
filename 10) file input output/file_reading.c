#include<stdio.h>
int main()
{
    FILE *value;//we have made a file pointer later in which we will store the values of file

    value = fopen("value.txt","r");//it will open the file by fopen("file name"," mode of file")
                                   //and store its address in pointer value 
    int num;
    int  num2;
    fscanf(value,"%d",&num);//fscanf also work like scanf but it is used for file
                            // just use pointer in which we have stored the file address 

    fscanf(value,"%d",&num2);// these is our second fscanf where we will get the next value from 
                             // first fscanf meance it do not take same values to store 
    
    fclose(value);//these will close the file 
    
    printf("the value of num is : %d \n",num);
    printf("the value of num2 is : %d \n",num2);

    
    
    return 0;
}