#include <stdio.h>
int main()
{
	int total_amount=4570,phone_bill=100,snacks,pens,expenditure,remaining,courier=40,xerox;
	printf("total_amount=4500\n");
	printf("phone bill=100\n");
	printf("expenditure of snacks=\n");
	scanf("%d",&snacks);
	printf("expenditure of pens= \n");
	scanf("%d",&pens);
	printf("expenditure of xerox=\n");
	scanf("%d",&xerox);
	expenditure = 100+snacks+pens+courier+xerox;
	remaining=total_amount-expenditure;
	printf("remaining amount=%d",remaining);
	return 0;
	
}
