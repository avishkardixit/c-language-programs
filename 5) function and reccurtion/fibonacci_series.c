#include<stdio.h>
int main ()

{
    int n,a,b,c,i=0;
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=0;i<n;i++)
    {
        c = a + b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}