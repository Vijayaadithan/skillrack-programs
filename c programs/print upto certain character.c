#include<stdio.h>
#include<string.h>
int main()
{
char s[100],c;
int i;
scanf("%s\n%c",s,&c);
for( i=0;i<strlen(s);i++)
{
    if(s[i]!=c)
	{
        printf("%c",s[i]);
		}
    else
	{
        break;
		
		}    
}
}
