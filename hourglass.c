#include<stdio.h>
#include<stdlib.h>
const int m=5,n=5;
void hourglass(int a[m][n])
{
	int sum,max=0,i,j;
	
	printf("\n");
	for(i=0;i<m-2;i++)
	{
		for(j=0;j<n-2;j++)
		{
			sum=(a[i][j]+a[i][j+1]+a[i][j+2])+
			(a[i+1][j+1])+
			(a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
			
			if(sum>max)
			max=sum;
		}
		
	}
	printf("%d",max);
}

void main()
{
	
	
		int a[5][5]={{1,2,3,0,0},
				{0,0,0,0,0},
				{2,1,4,0,0},
				{0,0,0,0,0},
				{1,1,0,1,0}};
	
	
	hourglass(a);
}

	