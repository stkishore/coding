#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k,n,a[10],count[10],temp2,temp;
	printf("enter the n number");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=0;i<n;i++)
	{	
	if(count[a[i]]<	count[a[i+1]])
	{
		temp=count[a[i]];
		count[a[i]]=count[a[i+1]];
		count[a[i+1]]=temp;
		
		temp2=a[i];
		a[i]=a[i+1];
		a[i+1]=temp2;
		
	}
		
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
