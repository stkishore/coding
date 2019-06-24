#include<stdio.h>
void main()
{
	int i,j,n,flag[10],count[10],c,ch,a[10],f2[10000]={0},temp=0,t2=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		ch=a[i];
		for(j=0;j<n;j++)
		{
				if(ch==a[j])
					c++;
			
		}
		
		count[i]=c;
		c=0;
	}
	
	for(i=0;i<n;i++)
{ 
for(j=0;j<n;j++)
{
	if(count[i]>count[j])
	{
		temp=count[i];
		count[i]=count[j];
		count[j]=temp;
		t2=a[i];
		a[i]=a[j];
		a[j]=t2;
	}
	if(count[i]==count[j])
		continue;
}
}
	for(i=0;i<n;i++)
	{
		if(f2[a[i]]!=1)
		{
		//printf("%d %d\n",a[i],count[i]);
		while(count[i]--)
			printf("%d ",a[i]);
		f2[a[i]]=1;
		}
	}
}
	
			
				