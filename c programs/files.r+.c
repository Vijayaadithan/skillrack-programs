#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int i;
	fp=fopen("vijay.txt","r+");
	char a[200];
    fputc('V',fp);

	


  
    
	fclose(fp);
}
