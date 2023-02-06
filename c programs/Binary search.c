#include <stdio.h>
int main()
{
	int a[100],i,n,first=0,last,mid,x;
	printf("total no:");
	scanf("%d",&n);
	printf("elements:");
	last=n-1;
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("elements to find:");
	scanf("%d",&x);
	while (first<=last)
	{
		mid=first+(last-first)/2;
		if(a[mid]<x)
		{
		
		first=mid+1;
	    }
		else if(a[mid]==x)
		{
			printf("element found=%d",a[mid]);
			break;
		}
		else
		{
		
		last=mid-1;
		}
	
	}
	 if (first>last)
	 {
	 
	 printf("element not found");
    }
	
	return 0;
}
