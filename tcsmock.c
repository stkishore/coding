#include<stdio.h>
int a[50]={0,1,2,1,3,2,5,3,7};

void fib(int i)
{
	a[i]=a[i-2]+a[i-4];
}
int pri(int i)
{

	int f=0;
	static int p=8;
	for(int j=2;j<=p;j++)
	{
		if(p%j==0)
		{
			f++;
		}
	}
	if(f==1)
	{
		a[i]=p;
		p++;
		return;
	}
	else
	{
		p++;
	pri(i);
	}
	
	
}

void main()
{
	int i,j,n,k;

	for(i=9;i<=50;i++)
	{
	if(i%2==0)
	{
	pri(i);
	}
	else
	{
		fib(i);
	}
	}
	printf("enter n");
	scanf("%d",&n);
	printf("\nvalue is %d",a[n]);
	
}

	