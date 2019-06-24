#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i,j,n,n2,b[20]={0},a[10][10];
	scanf("%d",&n);
	n2=n/2;
	
	for(i=0;i<n2;i++)
	{
		b[i]=b[n-i-1]=n-i;
		for(j=0;j<n;j++)
		{
			if(b[j]==0)
			{
				//printf("%d",b[i]);
				a[i][j]=b[i];
			}
			else
			{
			//printf("%d",b[j]);
			a[i][j]=b[j];
			}
			
		}
		//printf("\n");
	}
	
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
			
	for(i=n2-1;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
			
	
			
}