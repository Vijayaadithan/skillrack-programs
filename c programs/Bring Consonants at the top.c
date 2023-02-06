#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%c ",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        int kc=0,kv=0;char c[n],v[n];
        for(int j=0;j<n;j++)
        {
            char q=a[j][i];
            if (q=='a'||q=='e'||q=='i'||q=='o'||q=='u'||q=='A'||q=='E'||q=='I'||q=='O'||q=='U')
            {
                v[kv++]=q;
            }
            else
            {
                c[kc++]=q;
            }
        }
        kv-=1;kc-=1;
        int k=0,vijay=0,vedha=0;
        while(vijay<=kc)
        {
            a[k++][i]=c[vijay++];
        }
        while(vedha<=kv)
        {
            a[k++][i]=v[vedha++];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}
