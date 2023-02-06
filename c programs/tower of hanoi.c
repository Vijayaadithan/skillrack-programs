#include<stdio.h>
void tower(int n,char source,char inter,char destination);
int main()
{
	int n;
	printf("Enter no of disc:");
	scanf("%d",&n);
	tower(n,'A','B','C');
	return ;
}
void tower(int n,char source,char inter,char destination)
{
	if(n==1)
	{
		printf("\n Disk %d -> move from %c to %c",n,source,destination);
		return;
		
	}
	tower(n-1,source,destination,inter);
	printf("\n Disk %d -> move from %c to %c",n,source,destination);
	tower(n-1,inter,source,destination);
}
