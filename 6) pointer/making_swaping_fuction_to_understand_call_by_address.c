//@@@  swaping meanse interchanging the values  @@@
//here we are making two functions for swaping the values of variable 
//for that we are making the two functions in which one will call the values
//directly and other will call the values indirecty by getting address of variables 
//so let's see what happends  
#include<stdio.h>

//we are taking void function because we dont need any return value from function

void direct_swaping(int a, int b);//here the values will be getting directly by variables

void address_swaping(int *a,int *b);//here we are getting the address of a and b 

int main()
{
    int a = 1 ,b = 2; //we will take these variable for direct_swaping 

    int x = 10 , y = 20;//we will take these variable of address_swapping

    printf("the value of a is %d and b is %d before swaping\n\n",a,b);
    direct_swaping(a,b);//here compiler will send the copy of our vaariable 
                        //to function hence original values of a and b remains constant
    printf("the value of a is %d and b is %d after swaping\n\n",a,b);
   
    printf("the value of a is %d and b is %d before swaping\n\n",x,y);
    address_swaping(&x,&y);// here compiler  will send the address of our variable 
                           // to the function
    printf("the value of a is %d and b is %d after swaping\n\n",x,y);

    return 0;
}

void direct_swaping(int a,int b)//these function will get the copy of 
                                // original variable and hence these 
                                // function cant access the original variables
                                //therefor the value of original variable remains constan 
                                //or unchanged
{
    int c;//here swaping will be performed by getting one additional variable 
        // and storing value of 'a' in 'c' then value of 'b' in 'a' and value of  'c' in 'b' 
        // which is 'a' hence value of 'a' in 'b'
    c = a;
    a = b;
    b = c;


}
void address_swaping(int *a,int *b)//here compiler will get the value wich are stored 
                                   //in the address that meanse it will directly access 
                                   //the original address in main fuction hence the 
                                   //swaping of the address is will be performed on the exact
                                   //variables in main 
{
    int c;//here swaping will be performed by getting one additional variable 
        // and storing value of 'a' in 'c' then value of 'b' in 'a' and value of  'c' in 'b' 
        // which is 'a' hence value of 'a' in 'b'
    c = *a;
    *a = *b;
    *b = c;

//note we have written '*' before the variables because these variables are showing address of 
// a and b but when we add star before them they will shows the values stored at that address 
}


