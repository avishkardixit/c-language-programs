#include<stdio.h>
int main()
{
int a,b,c;
 FILE *integer;
 integer = fopen("demo_getc.txt","r");
 
 
 fscanf(integer,"%d  %d   %d",&a,&b,&c);//dont take comas in between %d it
                                        // will show random values 

 printf("%d %d %d",a,b,c);  


 
}