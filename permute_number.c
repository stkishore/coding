#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
static int x[10],x2=0,s;
	void swap(char *a,char *b)
	{	
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
	}
	void permute( char *str,int l,int r)
	{
		int i;
		if(l==r)
		{
			sscanf(str, "%d", &s);	
			x[x2++]=s;			
		}
		
		else{
		for(i=l;i<=r;i++)
		{
			swap((str+l),(str+i));
			permute(str,l+1,r);
			swap((str+l),(str+i));
		}
		}
		
	}
void main()
{
	int r,i,k,temp2,j,s2,str2;
	char str[10]="324";
	sscanf(str, "%d", &s2);	
	   str2=s2;
	r=strlen(str);	
	permute(str,0,r-1);
	
	for(i=0;i<x2;i++)
	{
		for(j=i+1;j<x2;j++)
		{
			if(x[i]>x[j])
			{
				temp2=x[i];
				x[i]=x[j];
				x[j]=temp2;
			}
		}
	}
		for(i=0;i<x2;i++)
		{
			if(x[i]==str2 && i+1<x2 && x[i]!=x[i+1])
			{
				printf("%d",x[i+1]);
				return;
			}
				
		}
		printf("-1");
		return ;

		
}