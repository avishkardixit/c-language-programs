#include <stdio.h>
int main()
{
    int phy;
    int chem;
    int math;
    int bio;
    int marathi;
    int eng;
    float total;
    
    printf("\t\t\t\tenter your marks of each subjects .\n");

    printf("\t\t\t\tphysics :");
    scanf("%d",&phy );

    printf("\t\t\t\tchemistry:");
    scanf("%d", &chem);

    printf("\t\t\t\tmathematics :");
    scanf("%d", &math);

    printf("\t\t\t\tbiology:");
    scanf("%d", &bio);

    printf("\t\t\t\tmarathi :");
    scanf("%d", &marathi);

    printf("\t\t\t\tenglish :");
    scanf("%d", &eng);
     
     total =(phy + chem + math + bio + marathi + eng)/6;
    if ( total > 35 && phy >37 && chem >37 && math > 37 && bio > 37 && marathi > 37 && eng >37)
    {
        printf("you are passed");
    }
    else
    {
        printf("you are failed");
    }
    return 0;
}