#include<stdio.h>
 
 struct bank_ac
{
    char name[60];
    char address[60];
    int accaunt_num;
    int ifcode;
}ac[5];



int main()
{
    int i;

    for( i=0;i<5;i++)
    {   
        fflush(stdin);

        printf("name : ");
        gets(ac[i].name);
     
        printf("address : ");
        gets(ac[i].address);
    
        printf("accaunt number :");
        scanf("%d",&ac[i].accaunt_num);
        
        printf("IFCD :");
        scanf("%d",&ac[i].ifcode);

        printf("\n");

       

    }
    FILE *ptr;
    ptr =fopen("bank_data.txt","w");
    for( i=0;i<5;i++)
    { 
        fprintf(ptr,"name of accaunt holder :%s \n",ac[i].name);
        fprintf(ptr,"address :%s \n",ac[i].address);
        fprintf(ptr,"accaunt number :%d \n",ac[i].accaunt_num);
        fprintf(ptr,"IFCD :%d \n\n",ac[i].ifcode);
       

        

    
    }
    fclose(ptr);

  
   
    
return 0;
}
