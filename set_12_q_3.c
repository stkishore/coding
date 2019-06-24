#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i,j,n,count=0,arr[10],s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++)
	{
		s=0;
		while(1)
		{
			
			
			if(s+3<arr[i])
			{
				count++;
				s=s+3;
				if(s+3>arr[i])
				{
					if(s+2>arr[i])
					{
						s+=1;
						count++;
						break;
					}
					if(s+1!=arr[i])
					{
						s+=2;
						count++;
						break;
					}
					
				}
				
			}
			else if(s+2>arr[i])
			{
				s+=1;
				count++;
				break;
			}
			else
			{
				s+=2;
				count++;
				break;
			}
			
				
				
		}
	}
	printf("%d",count);
}
	
	