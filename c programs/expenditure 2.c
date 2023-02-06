#include<stdio.h>
int main()
{
	int total,spent,n,sum=0,i;
	char reason[20];
	printf("Enter total amount:");
	scanf("%d",&total);
	printf("how many times you want to repeat:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("What for you Spent:\n");
	scanf("%s",&reason);
	printf("How much you spent:\n");
	scanf("%d",&spent);
	sum+=spent;
	}
	printf("remaining=%d ",total-sum);
}
