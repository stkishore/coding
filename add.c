#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k,n,sum=0,a[10];
	printf("enter the n");
	scanf("%d",&n);
	printf("enter values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=a[i]+a[j];
			for(k=0;k<n;k++)
			{
				if(sum==a[k])
				{
					printf("true");
					printf("%d",sum);
					exit(1);
				}
			}
		}
	}
}
				
			