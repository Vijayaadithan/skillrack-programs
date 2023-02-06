#include<stdio.h>
#include<string.h>
int main()
{
    int count=1,s,i;
    char a[100];
    scanf("%[^\n]",a);
    s=strlen(a);
    for( i=0;i<s;i++)
    {
        if(a[i]==' ')
        {
            count++;
            
        }
    }
    printf("%d",count);
    
}
