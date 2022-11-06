#include<stdio.h>
 
float avrg(float a,float b,float c);

int main()
{
    int x,y,z;
    printf("write the three numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    avrg(x,y,z);
    return 0;
}
float avrg(float a,float b,float c )
{
    printf("avarage of %.02f, %.02f and %.02f is %.02f",a,b,c,(a+b+c)/3);
}