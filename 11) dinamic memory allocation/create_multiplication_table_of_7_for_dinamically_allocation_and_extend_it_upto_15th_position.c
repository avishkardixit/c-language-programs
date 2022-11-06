#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;//here we have created integer pointer 
    int table = 7;

  

    ptr = (int *) calloc(5 , sizeof(int)); //these is calloc function after typecast in int 

    //note here we have allocated 5 integers memmory by calloc which we can use as array
    // to store elements
    
    for(int i =0 ; i < 10 ; i++)
    {
        printf("%d x %d = %d\n",i+1,table,(i+1)*table);
        
    }     
    

   // now we reallocate memory in same opinter by realloc
    
    ptr = realloc(ptr, 15*sizeof(int));
    for(int i =11 ; i < 15 ; i++)
    {
       
       printf("%d x %d = %d\n",i+1,table,(i+1)*table);  
        
    }

   
    return 0;
}