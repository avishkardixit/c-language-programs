//malloc is a function which is used to lacate memmory dinamically it takes number of element 
// for which you need memmory and the size of datatype and it allocate the memmory and write 
// its address in void pointer so because of that we type cast that pointer in our required
//data type

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;//here we have created integer pointer 

  // ptr =  malloc(5 * sizeof(int)); <--these is actually a malloc function but it stores value
                                         //in void pointer therefor we have typecasted it below 
                                         // in int because we have integer pointer

    ptr = (int *) malloc(5 * sizeof(int)); //these is malloc function after typecast in int 

    //note here we have allocated 5 integers memmory by malloc which we can use as array
    // to store elements
    
    for(int i =0 ; i < 5 ; i++)
    {
        printf("write the element of number %d :",i+1);
        scanf("%d",&ptr[i]);
        
    }

    printf("\n");

      for(int i =0 ; i < 5 ; i++)
    {
        printf(" the element of %d number is %d\n",i+1,ptr[i]);
       
    }
}