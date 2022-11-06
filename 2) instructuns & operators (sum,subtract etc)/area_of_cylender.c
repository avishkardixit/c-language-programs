#include<stdio.h>
int main()
{   
    float pie =3.14;    
    float r;
    float h;
   
    printf("radius of cylender is :");
    scanf("%f",&r); 
    printf("\n");
 
    printf("hight of cylender is :");
    scanf("%f",&h); 
    printf("\n");
 

    float r_sq = r * r;

    printf("the square of radius is %f",r * r);
    printf("\n");
    printf("area of base  is :%f",pie * r_sq);
    printf("\n");
    float b = pie * r_sq;
    printf("area of cylender  is :%f",b * h);
    printf("\n");

    return 0;


}