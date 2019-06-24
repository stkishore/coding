#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int k;
void main()
{
	int count=1,n,m,i=0,j;
	scanf("%d",&n);
	k=1;
	while(k<=n)
	{
		i++;
		if(i%2!=0&&k<=n)
		{
			for(j=0;j<i;j++)
			{
				if(k<=n){
				printf("%d ",k);
				k++;
				}
				else
					break;
			}
		}
		i++;
			if(i%2==0&&k<=n)
			{
			for(j=0;j<i;j++)
			{
				if(k<=n)
				{
				printf("-%d ",k);
				k++;
				}
				else
					break;
			}
			}
	}
}
			