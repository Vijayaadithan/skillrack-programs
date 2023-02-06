/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    int i,x=999999;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<x)
        {
            x=a[i];
        }
    }
    for(i=2;i<=x;i++)
    {
       int f=0;
       for(int j=0;j<n;j++)
       {
           if(a[j]%i!=0)
           f=1;
       }
       if(f==0)
       count++;
    }
    printf("%d",count);
}
