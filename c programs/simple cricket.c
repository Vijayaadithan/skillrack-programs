
#include <stdio.h>

struct crickerter
{
    int runs,wickets;
    char name[25];
}player[100];

void main()
{
    int i,n,o;
    printf("Enter no of overs:\n");
    scanf("%d",&o);
    printf("Enter the no of cricket players upto 11\n");
    scanf("%d",&n);
    printf("Enter player info as name , runs scored , wickets taken\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d",player[i].name,&player[i].runs,&player[i].wickets);
    }
    system("cls");
    printf("==============================================\n");
    printf("             OVERS COMPLETED : %d\n",o);
    printf("==============================================\n");
    printf("==============================================\n");
    printf("              TEAM CSE D  \n");
    printf("\nPLAYERS\t\tRUNS\t\tWICKETS\n");
    printf("==============================================\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\n\n",player[i].name,player[i].runs,player[i].wickets);
    }
    printf("==============================================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
 
