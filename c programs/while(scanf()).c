#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,c,b,dis=0,tim=0;
    char e,f,ch=' ';
    while(scanf("%d%c%d",&a,&e,&b)==3)
    
    {
        dis+=a;
        tim+=b;
    }
    float avg=dis/tim;
    printf("%.2f kmph",avg);
}