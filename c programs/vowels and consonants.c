#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100],x;
    int i,countv=0;
    int countc=0;
    scanf("%s",a);
    int len;
    len=strlen(a);
    char new[len];
    char vowel[len],consonant[len];
    int v=0,c=0;
    for(i=0;i<len;i++)
    {
        
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
        	countv++;
            vowel[v++]=a[i];
        }
        else
        {
        	countc++;
            consonant[c++]=a[i];
        }
    }
    int lenvowel=strlen(vowel);
    for(i=0;i<len;i++)
    {
    	if(lenvowel==countv)
    	{
    		break;
		}
		else
		{
			--lenvowel;
		}
	}
	int lencon=strlen(consonant);
	   for(i=0;i<len;i++)
    {
    	if(lencon==countc)
    	{
    		break;
		}
		else
		{
			--lencon;
		}
	}
	for(i=1;i<countv;i++)
	{
		new[i+2]=vowel[i];
	}
	printf("\n");
	for(i=0;i<countc;i++)
	{
		new[i+2]=consonant[i];
	}
	printf("%s",new);
	
    
    
}
