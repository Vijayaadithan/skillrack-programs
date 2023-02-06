
#include <stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char a[100],b;
    fp=fopen("vijay.txt","w");
    printf("enter");
    gets(a);
    fputs(a,fp);
    fclose(fp);
    fp=fopen("vijay.txt","r");
    b=getc(fp);
    while(b!=EOF)
    {
    	printf("%c",b);
    	b=getc(fp);
	}
	fclose(fp);
    
   
}

