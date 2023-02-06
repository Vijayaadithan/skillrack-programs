#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int i;
	fp=fopen("vijay.txt","a+");
	char a;
//	fputs("VIJAY",fp);
//	fputs("AADITHAN",fp);
	rewind(fp);
	a=fgetc(fp);
	while(a!=EOF)
	{
		printf("%c",a);
		a=fgetc(fp);
	}
    
	fclose(fp);
}
