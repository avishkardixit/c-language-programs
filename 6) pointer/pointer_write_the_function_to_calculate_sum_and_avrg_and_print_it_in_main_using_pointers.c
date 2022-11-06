#include<stdio.h>
int avrg_sum(int a,int b,int *sum,float *avrg);//here the addresses of sum and avrg which are
                                                //given by calling the avrg and sum in 
                                                //main in function are defined to store sum and
                                                // avrg in main by function 
                                                

int main()
{
    int a = 2, b = 3 ;
    int sum;
    float avrg;
    avrg_sum(a,b,&sum,&avrg);
    printf("the sum of a and b is %d\n\n",sum);
    printf("the avrg of a and b is %f\n\n",avrg);
}

int avrg_sum(int a,int b,int *sum ,float *avrg)
{
    *sum = a + b;    //so these sum and main are stored in the address given above 
                    // and these address are in main hence we have dirctly stored the 
                    //values in main
    *avrg = *sum /2;

}