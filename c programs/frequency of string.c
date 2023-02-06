#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int count[128]={0};
	char s[100];
	int i,j;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		count[s[i]]++;
	}
	for(j=0;j<128;j++)
	{
		if(count[j]>0)
		{
			printf("%c%d",j,count[j]);
		}
	}
}
