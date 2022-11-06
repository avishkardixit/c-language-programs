#include<stdio.h>
#include<math.h>
int ten_times(int a)
{
    a = pow(a,10);
    return a;
    
}

int main()
{
    int a = 2;
    printf("the 10 times of a is %d  \n\n",ten_times(a));
    
    return 0;
}