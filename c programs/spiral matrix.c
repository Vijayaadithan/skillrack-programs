#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int top=0,down=n-1,left=0,right=n-1;
	int a[n][n];
    for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int dir=0;
	while(top<=down && left<=right)
	{
		if(dir==0)
		{
			for(i=left;i<=right;i++)
			{
				printf("%d",a[top][i]);
			}
			top++;		     
		}
		else if(dir==1)
		{
			for(i=top;i<=down;i++)
			{
				printf("%d",a[i][right]);
			}
			right--;
		}
		else if(dir==2)
		{
			for (i=right;i>=left;i--)
			{
				printf("%d",a[down][i]);
			}
			down--;
		}
		else if (dir==3)
		{
			for(i=down;i>=top;i--)
			{
				printf("%d",a[i][left]);
			}
			left++;
		}
		dir=(dir+1)%4;
	}

}
