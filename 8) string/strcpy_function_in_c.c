//in string.h library the function strcpy function is used to copy one sring in other sring 

#include<stdio.h>
#include<string.h>
int main()
{
    char *fav_movie = "shole";
    char best_movie[45];
    strcpy(best_movie,fav_movie);//here in these function the content of second sring 
                                 //is copied in frist
    printf("the name of best movie is : %s",best_movie);
    return 0;


}