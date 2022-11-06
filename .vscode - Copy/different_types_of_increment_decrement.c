#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    printf("value of a is %d\n", a++); //here compiler first right the value and then increament 1 in it .
                                     //hence we cant see increament above it will increase the value by1
                                     // in next value

    printf("value of a is %d\n", a); //here you can see that the value of ais got increamented because
                                   //we had increased value by increasing value in above line

    printf("value of b is %d\n", ++b); //here compiler first increament the value and then print
                                     //so we can se the value of b is printed after increamenting 1
                                     // in it

    //these is same for decrement operation --b will first decreament then exicute
    //and b-- will first exicute and then decreament

    printf("value of c is %d\n",c);
    c+=10;//will increase the value bye 10 += is used to increament that value 
    printf("value of c is %d\n",c);//here the value of c is 20 and it will increase by 10
    return 0;
}