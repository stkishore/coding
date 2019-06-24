#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

 void main()
 {
	int a[]={-1,-2,-3,-4};
	int i,n,max,max1;
	n=sizeof(a)/sizeof(a[0]);
	max1=INT_MIN;
	
	for(i=0;i<n;i++)
	{
		max+=a[i];
		
		if(max1<max)
		{
			max1=max;
		}
		if(max<0)
			max=0;
	}
	
	printf("%d",max1);
 }
 