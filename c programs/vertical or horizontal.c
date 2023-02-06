#include <stdio.h>
int main()
{
	int x1,y1,x2,y2;
	printf("give values");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	if (x1==x2)
	printf ("the line is vertical");
	else if(y1==y2)
	printf("the line is horizontal");
	return 0 ;
	
}
