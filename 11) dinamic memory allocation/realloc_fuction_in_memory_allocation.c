//if sometime the memory which we had located dinamically is insuficiant and we need to extend
//it or some times  we have allocated the extra memory to which is not requered 
//so in that case realloc function will resize the memory it gates pointer and new size as input
//and resize it






#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;//here we have created integer pointer 

  

    ptr = (int *) calloc(5 , sizeof(int)); //these is calloc function after typecast in int 

    //note here we have allocated 5 integers memmory by calloc which we can use as array
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
   // now we reallocate memory in same opinter by realloc
    
    ptr = realloc(ptr, 10*sizeof(int));//these realloc function will reallocate memmory for
                                       //extra 10 elements in same pointer
    for(int i =0 ; i < 10 ; i++)
    {
         printf("write the element of number %d :",i+1);
         scanf("%d",&ptr[i]);
         
        
    }

    printf("\n");

      for(int i =0 ; i < 10 ; i++)
    {
        printf(" the element of %d number is %d\n",i+1,ptr[i]);
       
    }
    return 0;
}