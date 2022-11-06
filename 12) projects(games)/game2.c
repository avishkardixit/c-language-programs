//make a game of stone paper scissor
//step ;
//make two char variable which store the your choice and computer choice 
//genarat random number for choice of computer 
//create a condtion of three choicess for computer using if else 
//now get inpute of your choice 
//now print the both choises 
//now make a funcion with if else to check the winner and in that function 
//     return 0 if game tie return 1 if computer won and return -1 if you won
//now store that return value in variable and make if else condtion 
//for giving statment of winner 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int result(char comp,char you)
{ 

    // 0 = tie 
    // 1  = comp win 
    //-1 = you win
   if(comp == you)
   {
       return 0;
   } 
   if(comp == 's' && you == 'p')
   {
       return -1;
   }
    else if(comp == 's' && you == 'c')
   {
       return 1;
   }
    if(comp == 'p' && you == 's')
   {
       return 1;
   }
    else if(comp == 'p' && you == 'c')
   {
       return -1;
   }
    if(comp == 'c' && you == 's')
   {
       return -1;
   }
    else if(comp == 'c' && you == 'p')
   {
       return 1;
   }
}

int main()
{
    char comp , you ;
    int number;
    srand(time(0));
    number = rand()%10 + 1;
    if(number <= 2)
    {
        comp = 's';
    }
    else if( number > 2 && number <= 4)
    {
        comp ='p'; 
    }
    else if(number > 4 && number <= 6) 
    {
        comp ='c';
    }
        else if(number > 6 && number <= 8) 
    {
        comp ='s';
    }
        else if(number > 8 && number <= 9) 
    {
        comp ='p';
    }
     else if(number > 9 && number <= 10) 
    {
        comp ='p';
    }
    printf("chose 's' for stone 'p' for paper or  'c' for scissor\n");
    scanf("%c",&you);
    printf(" you have chosed %c and computer have chosed %c\n",you,comp);
     int r = result(comp,you);
    if( r == 0)
    {
        printf("game is tie !!!");
    }
    else if( r == 1)
    {
        printf("sorry,computer is winner  !!!");
    }
    else if( r == -1)
    {
        printf("congratulation ,you are the winner   !!!");
    }
    
    
    

}