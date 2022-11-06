

//free function use use to free up the memory which is getting unnessasary space in long long 
//memories


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
         free(ptr);//these will free up the memmory which is getting unneccesary space
        
    }

    printf("\n");

      for(int i =0 ; i < 5 ; i++)
    {
        printf(" the element of %d number is %d\n",i+1,ptr[i]);
       
    }
    return 0;
}