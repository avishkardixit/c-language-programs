#include<stdio.h>
int main ()
{
    int p;
    int r;
    int t;
    int a = 100;

    printf("enter the principal amaunt :");
    scanf("%d",&p);
    printf("\n");

    printf("enter the rate of intrest : ");
    scanf("%d",&r);
    printf("\n");

     printf("enter the time period for loan :");
    scanf("%d",&t);
    printf("\n");

    printf("the amaunt of intrest is %d",p*r*t/a);
    return 0;
}