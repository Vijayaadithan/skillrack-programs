#include<stdio.h>
main()
{
    int n,r,sum=0,a;
    printf("enter the number");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if (a==sum)
    printf("armstrong number");
    else
    printf(" not a armstrong number");
}
