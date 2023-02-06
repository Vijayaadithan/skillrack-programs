
#include <stdio.h>
#include<string.h>
int main()
{
    FILE *fp1,*fp2,*fp3;
    char a,b;
    fp1=fopen("vijay.txt","r");
    fp2=fopen("vijayv.txt","r");
    fp3=fopen("vijayaa.txt","a");
    b=getc(fp1);
    while(b!=EOF)
    {
    	putc(b,fp3);
    	b=getc(fp1);
	}
	a=getc(fp2);
	while(a!=EOF)
	{
		putc(a,fp3);
		a=getc(fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
    fclose(fp3);
   
}

