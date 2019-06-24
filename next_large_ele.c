#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k,n=8,m,flag=0,s,b[10],s1,s2;
	int a[]={2,5,8,90,77,54,4,3};
	for(i=0;i<n;i++)
	{
		s=a[i];
		for(j=i+1;j<n;j++)
		{
			if(a[j]>s)
			{
				s1=a[i];
				s2=a[j];
				for(k=1;k<n;k++)
				{
				if((a[k]>s1)&&(a[k]<s2))
				{
				s2=a[k];
				}
				}
				
				b[i]=s2;
				flag=1;
			}
			
			
		}
		
		if(flag==0)
		{
			b[i]=-1;
		}
		flag=0;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}