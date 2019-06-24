#include<stdio.h>
static int count[1000]={0};
int countt(int m,int i)
{
	int count2=0;
	while(m>=10)
	{
		count2++;
		m=m/10;
	}
	return m;
	count[i]=count2;
}

void main()
{
	int i,j,n,d[1000],temp,t2;
	int a[]={100,2,1,3,21,11};
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
		d[a[i]]=countt(a[i],i);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(d[a[i]]>d[a[j]])
			{
				t2=count[i];
				count[i]=count[j];
				count[j]=t2;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	
	
}
