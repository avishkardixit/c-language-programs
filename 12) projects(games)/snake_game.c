#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>




int hight = 30;
int width = 40;
int snake_x,snake_y;
int fruit_x,fruit_y;
int flag;
int end;
int score;
int tail_x[100],tail_y[100];
int piece = 0;
int for_end;

void make_move()
{
    int i;
    int prev_x,prev_y,prev2_x,prev2_y;
    prev_x =tail_x[0];
    prev_y =tail_y[0];
    tail_x[0] =snake_x;
    tail_y[0] = snake_y;
    for(i = 1 ; i <= piece ; i++)
    {
        prev2_x=tail_x[i];
        prev2_y=tail_y[i];
        tail_x[i]=prev_x;
        tail_y[i]=prev_y;
        prev_x = prev2_x;
        prev_y = prev2_y;

    }
    switch(flag)
    {
      case 1:
      {
      snake_x--;
      break;
      }
      case 2:
      {
          snake_x++;
          break;
      }
      case 3:
      {
          snake_y--;
          break;
      }
      case 4:
      {
          snake_y++;
          break;
      }

    }
    if(snake_x== 0 || snake_x== hight || snake_y==0 || snake_y == width)
    {
        end = 1;
    }
    if(snake_x == fruit_x && snake_y == fruit_y)
    {
         label3:
    fruit_x = rand()%20;
    if(fruit_x == 0)
    goto label3;

    label4:
    fruit_y = rand()%20;
    if(fruit_y == 0)
    goto label4;
    score+=10;;
    piece++;
    }


    

}

void input()
{
    if(kbhit())
    {
        switch(getch())
        {
             case 'w':
             {
                 flag=1;
                 break;
             }
             case 's':
             {
                 flag=2;
                 break;
             }
             case 'a':
             {
                 flag=3;
                 break;
             }
             case 'd':
             {
                 flag=4;
                 break;
             }
        }
    }
}

void setup()
{
    srand(time(0));
    snake_x = hight/2;
    snake_y = width/2;
    label1:
    fruit_x = rand()%20;
    if(fruit_x == 0)
    goto label1;

    label2:
    fruit_y = rand()%20;
    if(fruit_y == 0)
    goto label2;
    end = 0;
    score = 0;
    piece ++;

}
void block()
{   system("cls");//here is the pending from
    int i,j,k,ch;
    for(i = 0 ; i <= hight ; i++)
    {
       for(j = 0 ; j <= width ; j++)
        {
            if(i == 0 || i == hight || j == 0 || j == width  )
            {
                printf("*");
            } 
            else 
            {
               if(i == snake_x && j == snake_y)
                {
                    printf("0");
                    
                }
               else  if(i== fruit_x &&j == fruit_y)
                {
                    printf("#");
                }
                else
                { ch=0;
                  for(k=0;k<piece;k++)
                  {
                     if(i == tail_x[k] && j == tail_y[k] )
                     {
                         printf("o");
                         ch=1;
                     }
                  }
                  if(ch==0)
                  {
                 printf(" ");
                 
                  }
                }
            }

            
            
        }
       
        printf("\n");
    }
    if(end == 1)
    {
    printf("                    game over                      ");
    }
    
   
}
int main()
{   setup();
    while(end!=1 )
    {
    input();
    block();
    make_move();
    }
    scanf("%d",&for_end);
}