#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);	
	}
	int min=0;
	for (i=0;i<7;i++)
	{
		min=i;
		for(j=i+1;j<7;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		int tam=a[i];
		a[i]=a[min];
		a[min]=tam;
	}
	for(i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
	
}
