/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c],i=0,j=0;
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
    scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        int vijay=i;
        int vedha=0;
        while(vijay>=0)
        {
            printf("%d",a[vijay][vedha]);
            vijay-=1;vedha+=1;
        }
        printf(" ");
    }
    for(j=1;j<c;j++)
    {
        int vijay=r-1;
        int vedha=j;
        while(vedha<c)
        {
            printf("%d",a[vijay][vedha]);
            vijay-=1;vedha+=1;
        }
        printf(" ");
    }
    
}
