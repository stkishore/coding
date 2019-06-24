#include<stdio.h>
void main()
{
	int a[10],n,k,s=0,b[10];
	int i,j,temp,temp2;

	printf("enter the total no and the elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
		if(a[i]<a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
		}
	}
	
		i=0,j=n-1;
	while(i<j)
	{
		printf("%d",a[j--]);
	printf("%d",a[i++]);
	}
	if(n%2!=0)
		printf("%d",a[i]);
	
	
}