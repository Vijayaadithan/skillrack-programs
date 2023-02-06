#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001];scanf("%s",s); 
    if(strlen(s)<2)
    printf("%s",s);
    else
    {
        for(int i=0,j=i+2;;)
        {
            if(i>=strlen(s)||j>=strlen(s))
            break;
            else
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
            i=j+2;j=i+2;
        }
    
    printf("%s",s);
    }
}