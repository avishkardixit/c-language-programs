#include<stdio.h>
int main ()
{
    //below valid method for changing the words in string .

    char *name = "avishkar dixit ";//here in these method we are giving the
                                   // address of variable name in char pointer
                                   //hence we are able to change the name
    name = "shivam walke"; 
    printf("%s",name);
    

    

    char fav_food[]="vada pav ";//here we don't have given a address of variable hence we are not 
                                //able to change the words in string 
    fav_food ="hidrabadi biryani";
    printf("%s",fav_food);

    return 0;
}