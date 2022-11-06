#include<stdio.h>
typedef struct time
{
    int sec;
    int min;
    int hour;
}time;

void display(time d)
{
    printf("the time is %d:%d:%d\n",d.sec,d.min,d.hour);
}

int timecmp(time d1, time d2)
{
    if(d1.hour>d2.hour)
    {
        return 1;
    }
    if(d1.hour<d2.hour)
    {
        return -1;
    }
    if(d1.min>d2.min)
    {
        return 1;
    }
     if(d1.min<d2.min)
    {
        return -1;
    }
     if(d1.sec>d2.sec)
    {
        return 1;
    }
      if(d1.sec<d2.sec)
    {
        return -1;
    }
    return 0;
    
}

int main()
{
    time d1 ={12,45,20};
    time d2 ={10,03.55};
    
     
    display(d1);
    display(d2);

    int a = timecmp(d1,d2);
    

    if(a==1)
    {
        printf("first time is greater than second");
    }
    if(a==-1)
    {
        printf("first time is less than second");
    }
    if(a==0)
    {
        printf("both time are equal");
    }

    return 0;
}