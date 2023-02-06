#include<stdio.h>
int add (int a,int b)
{
	int c = a+b;
	return c;
}

int main ()
{
	int a =100;
	int b=125;
	int c =add (a,b);
	printf("%d",c);
	return ;

}

