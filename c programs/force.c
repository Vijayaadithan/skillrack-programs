#include <stdio.h>
int main()
{
 int mass,acc,force;
 printf("give mass and acc");
 scanf("%d %d",&mass,&acc);
 force= mass*acc;
 printf("force=%d",force);
 return 0;
}
