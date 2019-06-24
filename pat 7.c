#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i,j,k,space,kc=0,jc=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(space=0;space<=n-i;space++)
			printf(" ");
		if(i==1)
			printf(" %d \n",i);
		else
		{
			jc=0;
		for(j=i;jc!=i;j++)
		{
		printf("%d ",j);
		jc++;
		}
		kc=0;
		for(k=j-2;kc!=jc-1;k--)
		{
			printf("%d ",k);
			kc++;
		}
		printf("\n");
		}
	}
		
	
	
}