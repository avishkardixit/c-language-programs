#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter the value of a:");
    scanf("%d",&b);

    for(a = 1 ; a <= 10 ; a++)
    {
        printf("%d x %d  = %d \n",b,a,b*a);
        if (a==8)break;//here when the condition in if is true then the break will get 
                        //exicuted and then loop will gett terminated
                        //hence here the loop get termineted at 8
    }
    return 0;
}