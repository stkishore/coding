#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

void main()
{
	int i,j,k,c=1,co,s,n,str[20],strc[20],y;
	
	str[k++]=1;
	scanf("%d",&n);
	printf("1");
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		co=k;
		k=0;
		for(j=0;j<co;j++)
		{
			s=str[j];
			while(s==str[j+1])
			{
				c++;
				j++;
			}
			printf("%d %d ",c,s);
			
			strc[k++]=c;
			c=1;
			strc[k++]=s;
				
		}
		for(y=0;y<k;y++)
		{
			str[y]=strc[y];
		}
		printf("\n");
	}
	
}