#include<stdio.h>
int main()
{
    int num = 1; 
    int limit;
    float sum = 0.0;
    float fact;

    printf("Enter the number of terms\n");
    scanf("%d",&limit);

    while(num <= limit)
    {
        fact = 1;
        for(int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }

        sum = sum + (num / fact);

        num++;
    }

    printf("Sum of %d terms of series is %f\n", limit, sum);

    return 0;
}