#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int i;
	fp=fopen("vijay.txt","r");
	char a;
	a=fgetc(fp);
	while(a!=EOF)
	{
		printf("%c",a);
		a=fgetc(fp);
	}
  
    
	fclose(fp);
}
