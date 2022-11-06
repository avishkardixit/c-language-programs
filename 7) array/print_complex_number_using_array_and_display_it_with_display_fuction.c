#include<stdio.h>
 
   
    typedef struct complex_num//these is the datatype for our complex number 
    {
        int real ;
        int complex;
    }complex;//these struct is conveted into inngle word with typedef keyword 

    void display(complex c)//these will take the element of structure c numbers element in short 
    {       
             printf("the %d is real and %d is complex  ",c.real,c.complex);//these will print 
                                                                 //the complex and real of number 'c'
    }
int main()
{  
    complex numbers[5];//these array is defining the element as a complex 

    for(int i = 0; i<5 ; i++)//these loop will get complex numbers and store it into array
    {
        printf("enter the real of %d :",i+1);
        scanf("%d",&numbers[i].real);

        printf("enter the complex of %d :",i+1);
        scanf("%d",&numbers[i].complex);
    }

    for(int i= 0; i<5 ; i++)//these will print array elements in order
    {
       printf("in a comlex number %d ",i+1);
       display(numbers[i]);//these function will take complex numbers bye a function 
       printf("\n");
    }





}
