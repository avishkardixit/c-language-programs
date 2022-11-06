#include<stdio.h>
int main()
{
    char name[100];
    char full_name[100];
  //  printf("enter your name :");
  //  scanf("%s",name);// here while you are inputing the string you dont need to write  '&' in front of 
                    // name of variable cause it is already a address of frist element
  //  printf("your  name is %s",name);

    printf("enter your full name :");
    //scanf("%s",full_name);

    // here the scanf can't store multipal words string hence we need a 'gets()' function here

    gets(full_name);

    printf("your full name is %s",full_name);



}