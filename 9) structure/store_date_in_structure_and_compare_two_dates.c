#include<stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
}date;

void display(date d)
{
    printf("the date is %d/%d/%d\n",d.date,d.month,d.year);
}

int datecmp(date d1, date d2)
{
    if(d1.year>d2.year)
    {
        return 1;
    }
    if(d1.year<d2.year)
    {
        return -1;
    }
    if(d1.month>d2.month)
    {
        return 1;
    }
     if(d1.month<d2.month)
    {
        return -1;
    }
     if(d1.date>d2.date)
    {
        return 1;
    }
      if(d1.date<d2.date)
    {
        return -1;
    }
    return 0;
    
}

int main()
{
    date d1 ={23,07,2002};
    date d2 ={10,04,1998};
    
     
    display(d1);
    display(d2);

    int a = datecmp(d1,d2);
    

    if(a==1)
    {
        printf("first date is greater than second");
    }
    if(a==-1)
    {
        printf("first date is less than second");
    }
    if(a==0)
    {
        printf("both dates are equal");
    }

    return 0;
}