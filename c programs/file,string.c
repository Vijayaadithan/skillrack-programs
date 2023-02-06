#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int i;
	fp=fopen("vijay.txt","w");
	char a[700];
	printf("enter ");
	gets(a);
    fputs(a,fp);
    
	fclose(fp);
}
