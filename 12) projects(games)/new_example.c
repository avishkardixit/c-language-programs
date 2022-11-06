#include <stdio.h>
#include<math.h>


int main() {
	int t;
	scanf("%d",t);
	for(int i = 0 ; i < t ; i++)
	{
	    int g , c ,re,z=2;
	    scanf("%d %d",&g,&c);
	    re = ((c*c)/(g*z));
	    printf("%d",re);
         

	}
    return 0;
}