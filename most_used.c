#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,j,n,m,a[10],b[10],count=0,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		printf("enter the key");
		scanf("%d",&m);
		for(j=0;j<n;j++)
		{
			if(m==a[j])
			{
				b[j]=1;
				printf("most used");
				flag=1;
				break;
			}
			
		}
		if(flag==0)
		{
			for(j=0;j<n;j++)
			{
				if(b[j]==0)
				{
					b[j]=1;
					a[j]=m;
			printf("least used");
				}
		}
		}
		flag=0;
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
