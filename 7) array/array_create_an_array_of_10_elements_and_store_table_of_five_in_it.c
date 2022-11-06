#include<stdio.h>
int main()
{
    int arr[10];

    for(int i = 0 ; i <= 9 ; i++)
    {
        arr[i] = (i+1)*5;//these will fill the table of 5 in array 
    }

     for(int i = 0 ; i <= 9 ; i++)
    {
        printf("5 x %d = %d\n",i+1,arr[i]);
    }
}