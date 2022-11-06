//the pointer are used to stored the addresses of variable and it is denoted by '*' 
//eg. when int a ; is storing the integer value then int *a stores the address of integer 
#include<stdio.h>
int main()
{
    int a = 34;//here we have stored integer in a.
    
    int *b = &a;//here to store address you have to right star at starting of integer 
    
    printf("value of a is %d\n\n",a);
   
    printf("1)address of a is %d\n\n",b);//her we have stored the address of a in b so we
                                       // get the address of a

    //similarly 
    printf("2)the address of a is %u\n\n",&a);//here we will get addrss using %u format specifire 
                                        //for that we have clearly decleared the address of a
                                        //with &a
                                   

   
    printf("the vakue stored in address '*b' is %d\n\n",*b);//here we will get the value stored at
                                                            //address b by using *b syntax 

                                                      
    return 0;
}