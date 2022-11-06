#include<stdio.h>
int main()
{   
    float pie =3.14;    
    float r;
   
    printf("radius of circle is :");
    scanf("%f",&r); 
    printf("\n");
 

    float r_sq = r * r;

    printf("the square of radius is %f",r * r);
    printf("\n");
    printf("area of circle is :%f",pie * r_sq);
    printf("\n");

    return 0;


}