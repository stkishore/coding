#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j=1,n=5,m,val=0,k,count=0;
	for(k=1;k<=n;k++)
	{
		val=(k&1)?(count+1):(count+i);
		for(i=1;i<=k;i++)
		{
			printf("%d ",val);
			if(k&1)
				val++;
			else
				val--;
			count++;
		}
		printf("\n");
	}
	
			
			
}
