#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("write the value of N :");
    scanf("%d",&b);
//here in for loop we have initiated the value of a equal to b and looping starts at our input  
// value aslo we termineted loop at its value is one and loop is in decreamenting 

    for(a = b ; a >= 1  ; a--)
    {
        printf("%d\n",a);
    }
      return 0;
}