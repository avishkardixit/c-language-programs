//type def is a keyword which converts the struct datatype in single word datatype so we can easily
//write it 
//eg. in the below given structure the data type struct student is replaced by word candidate 
//which can give us the assess to directy access the tructure datatype in just one word candidate exept 
// the lainthy one which is struct student 

#include<stdio.h>
#include<string.h>
typedef struct student//here these struct is converted by typedef keyword which you can se convert it 
                      //into candidate word
{
    int sid;
    char name[100];
    float percentage;

}candidate;//here these structure can access direct by word candidate
int main()
{
    candidate s1;
    candidate *ptr;

    ptr = &s1;
  (*ptr).sid=101;
  strcpy(s1.name,"avishkar dixit");
  (*ptr).percentage=97.43;
printf("%d\n",s1.sid);
printf("%s\n",s1.name);
printf("%.2f\n",s1.percentage);


return 0;
}