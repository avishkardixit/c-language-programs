#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ 
    int number;
    srand(time(0));//initialize the random number
    number = rand()%100 + 1;//these will generate random number then 
                            //it will divide it by 100 the we will get 
                            //number between 0 to 100 and then add 1 to get
                            //number between 1 to 100
    printf("the number is %d",number);
    return 0;

}