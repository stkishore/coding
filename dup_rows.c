#include<stdio.h>
#include<stdlib.h>

#define R 5
#define C 3
void main()
{
	int i,j,n,v=0,k=0,v2=0;
	int arr[][C]={{1,0,1},{1,1,1},{1,0,1},{1,2,2},{1,2,2}};
	int val[5]={1,1,1,1,1};
	
	for(i=0;i<R;i++)
	{
		for(j=i+1;j<R;j++)
		{
			k=0;
			while(arr[i][k]==arr[j][k] && k<C && val[j]!=0)
			{
				++k;
			}
			if(k==C)
			{
			val[j]=0;
			}
			
		}
		
	}
		for(i=0;i<R;i++)
		{
		for(j=0;j<C;j++)
		{
			if(val[i]==1)
			{
				v2=1;
			printf("%d ",arr[i][j]);
			}
		}
		if(v2==1)
		printf("\n");
		v2=0;
		}
}