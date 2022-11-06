#include<stdio.h>
#include<math.h>
int increase_10_times(int *a);

int main()
{
    int a = 2;
    
    increase_10_times(&a);//these will send the address of the 
                                                              // 'a' and *a wich is at function
                                                              // will get the value stored at 
    
    return 0;
}
int increase_10_times(int *a)
{   
   
    printf("the 10 times of the %d is %.02f",*a,pow(*a,10));//note that power function will 
                                                            // calculate the value in float 
                                                            // so make sure that you will
                                                            //write %f format specifire for 
                                                            //pow function

}
