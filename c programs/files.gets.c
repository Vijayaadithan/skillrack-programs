#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int i;
	fp=fopen("vijay.txt","r");
	char a[100];
    fgets(a,12,fp);
   printf("%s",a);
  
    
	fclose(fp);
}
