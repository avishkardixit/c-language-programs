//we are making a game to guess the random number we have genrated 
#include<stdio.h>//for printf and scanf basic fuctions 
#include<stdlib.h>//for genrating random variable
#include<time.h>//for giving a time in which program will genrate random number
int main()
{ 
    int number,guess,n_guess =1;
    srand(time(0));//initialize the random number
    number = rand()%100 + 1;//these will generate random number then 
                            //it will divide it by 100 the we will get 
                            //number between 0 to 100 and then add 1 to get
                            //number between 1 to 100
  
  do{
     printf("guess the number :");//here these will take your input and check whether it is 
                                  //lower than random number greater than random nuber 
                                  // correct random number 
     scanf("%d",&guess);
     printf("\n");
     if(number>guess)
     {
         printf("greater number please \n");
     }
     else if(number<guess)
     {
         printf("lower number please \n");
     }
     else
     {
         printf("correct guess the number is %d\n\n",number );
         printf("you have guessed the number in %d attempts ",n_guess);
     }
     n_guess++;//here the value of your guess will be stored 
               //after every guess and keep adding 1 after every loop

  }while(number!=guess);//these is the condition where loop will continues
                         // untile number is equal to guess
  return 0;

}