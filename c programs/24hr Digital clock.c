#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int h,m,s;
	printf("Enter Present Time In HH:MM:SS :\n\n");
	scanf("%d%d%d",&h,&m,&s);
	if(h>12||m>=60||s>=60)
	{
		printf("!!Enter Correct Time!!");
		exit(0);//to terminate program 
	}
		while(1)
		{
			s++;
			if(s==60)
			{
				m++;
				s=0;
			}
			if(m==60)
			{
				h++;
				m=0;
			}
			if(h>12)
			{
				h=1;
				
			}
			printf("CLOCK :\n\n");
			printf("%02d:%02d:%02d",h,m,s);
			sleep(1) ;//to delay seconds
		    system("cls");
		}
	
}
