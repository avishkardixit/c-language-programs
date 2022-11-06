#include<stdio.h>
int main()
{
    char str[400]="bjjjdsiidiinniiddvbbssoonnwijrfnjdkjksjdjksdcijsdoiejsdjkcnncsnlasnjsnsjc";
    char *ptr=str;//these is the pointer storing the address of first element of string 
    int occurance=0;//these is initialized the number of occurance for storing the number
                    // of occurance in any string 

    while(*ptr != '\0')
    {
       if(*ptr == 'p')
       {
        occurance++;
       }
       ptr++;

    }
    printf("the occurance of the j is %d times",occurance);



}