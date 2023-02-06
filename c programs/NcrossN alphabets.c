#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,count=0;
    j=97;
    for(i=0;i<n;i++)
    {
        count=0;
        while(count<n)
        {
            count+=1;
            printf("%c ",j);
            j+=1;
            if(j==123)
            {
                j=97;
            }
        }
        printf("\n");
    }
}
