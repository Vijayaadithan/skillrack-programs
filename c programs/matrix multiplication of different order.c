#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100][100],b[100][100],c[100][100]={0},m1,n1,i,j,k,m2,n2;
    scanf("%d %d",&m1,&n1);
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&m2,&n2);
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n1==m2)
    {
        
    
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            for(k=0;k<n2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("Invalid Matrices");
    }
    

}
