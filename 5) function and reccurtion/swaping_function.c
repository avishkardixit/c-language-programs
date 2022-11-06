#include<stdio.h>
void swaping(int *a,int *b);
int main()
{
    int x = 10 , y = 20;
   
    printf("the value of a is %d and b is %d before swaping\n\n",x,y);

    swaping(&x,&y);
    printf("the value of a is %d and b is %d after swaping\n\n",x,y);

    return 0;
}

void swaping(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;

}


