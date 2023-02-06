
#include <stdio.h>
struct crickerter
{
    int runs,wickets;
    char name[30];
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
    printf("===================================================================================================\n");
    printf("%40s  %d\n","OVERS COMPLETED :",o);
    printf("===================================================================================================\n");
    printf("===================================================================================================\n");
    printf(" %40s\n","TEAM CSE D");
    printf("\n%-30s %-20s %-20s\n","PLAYERS","RUNS","WICKETS");
    printf("====================================================================================================\n");
    for(i=0;i<n;i++)
    {
        printf("%-30s %-20d %-20d\n\n",player[i].name,player[i].runs,player[i].wickets);
    }
    printf("====================================================================================================\n\n");
}
 
