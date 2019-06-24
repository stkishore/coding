#include<stdio.h>
#include<stdlib.h>
int dectobin(int n)
{
	int val[1000],i=0,j;
	while(n!=0)
	{
		if(n&1)
		{
			val[i]=1;
		}
		else
		{
			val[i]=0;
		}
		n>>=1;
		i++;
	}
	for(j=i-1;j>=0;j--)
	printf("%d",val[j]);
}
void main()
{
	int i,n,j,count=0;
	scanf("%d",&n);
	dectobin(n);
	/*while(n!=0)
	{
		if(n&1)
		{
		}
		else
		{
			count++;
		}
		n>>=1;
	}
	printf("%d",count);*/
}
		