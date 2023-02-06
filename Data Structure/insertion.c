#include<stdio.h>
int main()
{
	int a[100],i,n,position;
	printf("give n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	// 1  2  3  4  5
	// 10 20 30 40 50
	// 0  1  2  3  4
	position=3;
	if(position>0&&position<=n+1)//important
	{
		n++;
	}
	for(i=n-1;i>=position-1;i--)
	{
		a[i+1]=a[i];
	}
	a[position-1]=100;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
