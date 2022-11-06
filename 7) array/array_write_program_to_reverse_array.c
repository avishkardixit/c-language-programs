// we will use swaping here 
#include<stdio.h>
int main()
{
    int arr[] ={1,2,3,4,5,6,7,8,9};
    int temp;
    for(int i= 0 ; i < 9 ; i++)
    {
        temp = arr[i];
        arr[i] = arr[9 - i - 1];
        arr[9 - i -1] = temp;
        
    }
    
    for(int i= 0 ; i < 9 ; i++)
    {
    printf("\nthe array in reverse is %d\n ",arr[i]);
    }
}