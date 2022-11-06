#include<stdio.h>



int main()
{
    int n_bike = 5;
    int n_price = 2;

    int bike_price[5][2];

    for(int i = 0 ; i < n_bike ; i++)
    {
        for(int j = 0 ; j < n_price ; j++)
        {
           if(j == 0)
           {
            printf("enter the price of bike %d at first ownership :",i+1,j+1);
            scanf("%d",&bike_price[i][j]);
           }
           if(j == 1)
           {
            printf("enter the price of bike %d at second ownership :",i+1,j+1);
            scanf("%d",&bike_price[i][j]);   
           }
        }
    }
    display(int bike_price[][],5,2);
     for(int i = 0 ; i < n_bike ; i++)
    {
        for(int j = 0 ; j < n_price ; j++)
        {
           if(j == 0)
           {
            printf(" the price of bike %d at first ownership :%d\n\n",i+1,bike_price[i][j]);
            
           }
           if(j == 1)
           {
           printf(" the price of bike %d at second ownership :%d\n\n",i+1,bike_price[i][j]);  
           }
        }
    }


}