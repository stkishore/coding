#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i=0,j=0,n,m,ind;
	int a[]={2,2,3,3,5};
	n=(sizeof(a)/sizeof(a[0]));
	/*for(i=0;i<n;i++)
	scanf("%d",&a[i]);*/
	while(i<n)
	{
		if(a[i]<=0)
		{
			i++;
			continue;
		}
		ind=a[i]-1;
		if(a[ind]>0)
		{
			a[i]=a[ind];
			a[ind]=-1;
		}
		else
		{
			a[ind]--;
			a[i]=0;
			i++;
		}
		
	}
	for(j=0;j<n;j++)
	{
		printf("%d -> %d",j+1,abs(a[j]));
		printf("\n");
	}
}

	