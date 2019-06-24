#include<stdio.h>
#include<stdlib.h>
void main()
{	
	int i,j,n1=1,n2,i2,check=0,check2=0,key1=0,key2=0,n3;
	scanf("%d",&n2);
	n3=n2;
	for(i2=0;i2<n3/2;i2++)
	{
	for(i=1;i<=n1;i++)
	{
		if(n1%i==0)
		{
			key1++;
		}
	}
	/*if(key1==2)
		check=1;*/
	--n2;
	for(j=1;j<=n2;j++)
	{
		if(n2%j==0)
		{
			key2++;
		}
	}
/*	if(key2==2)
		check2=1;*/
	if(key1==2&&key2==2)
	{
		if(n1+n2==n3)
		{
			printf("%d %d",n1,n2);
			return;
		}
	}
	check=0;check2=0;++n1;key1=0,key2=0;
	}
}
	
	