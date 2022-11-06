//note : %c only takes one charactor input so we have to design loop to enter string
//       charactor by charactor


#include<stdio.h>
#include<string.h>
int main ()
{
    char a[45];//string 
    char b[45];
   

    char c;//charactor for geting charactor from user and storing it in string
    int i = 0;//it is indicating address of sting initially it is zero and it get
              // along with each enterd charector increamented in loop 
    printf("enter your string charector by charactor  : ");
    while(c != '\n' )
    {
        fflush(stdin);//to vanish the inpute of enter which we are using at the time of enter 
//note : if we dont include these function the enter button hitted will give \n the inpute to
        // charector and hence the condition in loop will get exicuted and hence loop will
        // get termineted

        
        scanf("%c",&c);
        a[i]=c;
        i++;
    }
    a[i-1]= '\0';//these charector will stored after last charector of string because our adress i 
               //is locating the address of that place and these charector will terminate the string 

    
    printf("enter the second  string :");
    scanf("%s",b);
    printf("first string is : %s\n",a);
    printf("second string is : %s\n",b);

    int z = strcmp(a,b);

    if(z == 0)
    {
        printf("both strings are equal ");
    
    }
    else 
    {
        printf("both strings are not equal ");

    }
     
    



}