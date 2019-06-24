#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int i,j,n,count=5,n1,r=0,s,res,n2,count2=0;
	char str[10];
	scanf("%d",&n);
	
	while(count--)
	{
		n1=n;
		while(n>0)
		{
		s=n%10;
		r=(r*10)+s;
		n=n/10;
		}
		res+=n1+r;
		snprintf(str, sizeof(res), "%d",res);
		
		n2=strlen(str);

		for(i=0;i<n2/2;i++)
		{
			if(str[i]!=str[n2-1-i])
			{
				count2++;
				break;
			}
		}
		if(count2==0)
		{
			printf("%s",str);
			exit(1);
		}
		else
		{
			count2=0;
			n=res;
			r=0;
			res=0;
		}
	}
}
		