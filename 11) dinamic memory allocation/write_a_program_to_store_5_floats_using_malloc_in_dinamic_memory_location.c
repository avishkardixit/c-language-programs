#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;//here we have created integer pointer 

  // ptr =  malloc(5 * sizeof(float)); <--these is actually a malloc function but it stores value
                                         //in void pointer therefor we have typecasted it below 
                                         // in float because we have float pointer

    ptr = (float *) malloc(5 * sizeof(float));//these is malloc function after typecast in float 

    //note here we have allocated 5 float memmory by malloc which we can use as array
    // to store elements
    
    for(int i =0 ; i < 5 ; i++)
    {
        printf("write the element of number %d :",i+1);
        scanf("%f",&ptr[i]);
        
    }

    printf("\n");

      for(int i =0 ; i < 5 ; i++)
    {
        printf(" the element of %d number is %.2f\n",i+1,ptr[i]);
       
    }
    return 0;
}