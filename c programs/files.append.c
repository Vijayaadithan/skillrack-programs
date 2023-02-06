#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int i;
	fp=fopen("vijay.txt","a");
	char a[100];
	printf("enter the content");
	gets(a);
	fputs(a,fp);


  
    
	fclose(fp);
}
