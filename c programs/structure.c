#include<stdio.h>
#include<string.h>
struct student 
{
	char name[100];
	int rollno;
	int m1,m2;
	
}s[20];
int main()
{
	int i,n,j;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter name\n");
		scanf("%s",&s[i].name);
		printf("enter rollno\n");
		scanf("%d",&s[i].rollno);
		printf("enter marks\n");
		scanf("%d %d",&s[i].m1,&s[i].m2);
	
	}
	printf("NAME\t\tROLLNO\t\tM1\tM2\n\n\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t%d\t\t%d\t%d\n\n",s[i].name,s[i].rollno,s[i].m1,s[i].m2);
	}
	
}
