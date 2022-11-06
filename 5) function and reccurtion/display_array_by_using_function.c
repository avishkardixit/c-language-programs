#include<stdio.h>

int display(int array[int size_a][int size_b]);



int main()
{
    int array[2][3];
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++ )
        {
            printf("enter the %d number of %d place :",i+1,j+1);
            scanf("%d",&array[i][j]);
            
        }
    }
}//these program is pending 

int display(int *array[][],int size_a,int size_b)
{
    for(int i =  0 ; i < size_a ; i++)
    {
        for(int j = 0 ; j < size_b ; j++)
        {
            printf("the %d number of %d place is %d ",i+1,j+1,*array[i][j]);
        }
    }
}