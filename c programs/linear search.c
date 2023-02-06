#include<stdio.h>
int main()
{
	int a[100],i,n,t,flag=0;
	printf("enter elements");
	scanf("%d",&n);
	printf("elements");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter element to search");
	scanf("%d",&t);
	for (i=0;i<n;i++)
	{
		if(a[i]==t)
		{
		
			printf("element found=%d",a[i]);
			flag=1;
			break;
		}
			
    }
    if(flag==0)
    {
	
    printf("element not present");
   	}
    
}
