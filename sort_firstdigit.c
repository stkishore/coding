#include<stdio.h>
#include<stdlib.h>
int first(int m)
{
	while(m>=10)
		m/=10;
	return m;
}
int count(int m)
{
	int count2=0;
	while(m!=0)
	{
		count2++;
		m/=10;
	}
	return count2;
}

void main()
{
	int n,i,j,temp,temp2;
	int arr[]={100,2,1,3,21,11};
	n=sizeof(arr)/sizeof(arr[0]);
	int *first_value=(int *)malloc(n*sizeof(int));
	int *count_value=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		first_value[i]=first(arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(first_value[i]>first_value[j])
			{
				temp=first_value[i];
				first_value[i]=first_value[j];
				first_value[j]=temp;
				temp2=arr[i];
				arr[i]=arr[j];
				arr[j]=temp2;
			}
			
		}
	}
	for(i=0;i<n;i++)
		count_value[i]=count(arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(count_value[i]<count_value[j] && first_value[i]==first_value[j])
			{
				temp=count_value[i];
				count_value[i]=count_value[j];
				count_value[j]=temp;
				temp2=arr[i];
				arr[i]=arr[j];
				arr[j]=temp2;
			}
			
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}