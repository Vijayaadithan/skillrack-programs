#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,key;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);	
	}
	// 12  11
	for(i=1;i<7;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&key<a[j])
		{
			a[j+1]=a[j];
			j-=1;
			
		}
		a[j+1]=key;
	}
	for(i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
}
