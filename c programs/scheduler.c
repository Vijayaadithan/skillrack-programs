#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct schedule
{
	char subject[20];
	int units;
}s[20];
int main()
{
	int i,n,m,v,ran,ran1;
	printf("Enter how many subjects :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter subject name:");
		scanf("%s",s[i].subject);
		printf("How many units there:");
		scanf("%d",&s[i].units);
	}
	printf("enter number from 1 to 15:");
	scanf("%d",&m);
	system("cls");
		printf("==============================\n");
		printf("SUBJECTS \t\t UNITS\n\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t\t %d\n",s[i].subject,s[i].units);
	}
	printf("==============================");
	printf("\n\n");
   printf("TOPIC TO STUDY TODAY\n\n");
    ran=rand()%m;
    switch(ran)
	{
	  
	  
	 	case 1:
	  		{
				 printf("maths-unit 1\nphysics-unit 5");
				break;
			}
		case 2:
		{
			printf("chemistry-unit 1\nbeem-unit 5");
			break ;
			
		}
		
			case 3:
			{
				printf("c-unit 1\nenglish-unit 5");
				break;
			}
			case 4:
			{
				printf("maths-unit2\nphysics-unit 4");
				break ;
			}
				
			case 5:
			{
				printf("chemistry-unit 2\nbeem-unit 4");
			
				break;
			}
			case 6:
			{
				printf("c-unit 2\nenglish-unit 4");
				break;
			}
			case 7:
			{
					printf("maths-unit 5\nphysics-unit 3");
				break;
			}
			case 8:
			{
				printf("chemistry-unit 5\nbeem-unit 3");
				break;
			}
			case 9:
			{
				printf("c-unit 5\nenglish-unit 3");
				break;
			}
			case 10:
			{
					printf("maths-unit 3\nphysics-unit 1");
				break;
			}
			case 11:
			{
				printf("chemistry-unit 3\nbeem-unit 1");
				break;
			}
			case 12:
			{
				printf("c-unit 3\nenglish-unit 1");
				break;
			}
			case 13:
			{
					printf("maths-unit 4\nphysics-unit 2");
				break;
			}
			case 14:
			{
				printf("chemistry-unit 4\nbeem-unit 2");
				break;
			}
			case 15:
			{
				printf("c-unit 4\nenglish-unit 2");
				break;
			}
				
	}
	printf("\n\n");
	printf("!!!STUDY FOR YOUR LIFE!!!");
	
}
