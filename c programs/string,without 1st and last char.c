#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char s[1000],temp[1000];
    scanf("%s",s);
    while(s[i+2]!='\0')
    {
        temp[i]=s[i+1];
        i++;
    }
    temp[i]='\0';
    printf("%s\n",temp);
    return 0;
}
