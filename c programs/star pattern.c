#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	for (i=0;i<5;i++)
	{
		for(k=4-i;k>=0;k--)
		{
			printf(" ");
		}
		    for(j=0;j<=i;j++)
		    {
		    	printf("*");
			}
			printf("\n");		
	}
}
