#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void main()
{
	int i,j,var,hash[10],len,n,div,sum=1,v[10],vc=0,ch,h2[10];
	double d;
	char *arr[]={"cat","tac","cat","dog","god"};
	char str[10],*arrdup[10];
	n=sizeof(arr)/sizeof(arr[0]);
		
	for(i=0;i<n;i++)
	{
		stpcpy(str,arr[i]);
		len=strlen(arr[i]);
		var=0;
		for(j=0;j<len;j++)
		{
			var+=str[j]-'\0';
		}
		div=pow(10,len-1);
		d=var%div;
		hash[i]=d;
	}
	for(i=0;i<n;i++)
	{
		ch=hash[i];
		if(h2[ch]!=1)
		{
		for(j=i+1;j<n;j++)
		{
			if(ch==hash[j])
			{
				sum++;
			}
		}
		v[vc++]=sum;
		sum=1;
		}
		h2[ch]=1;
	
	}
	for(i=0;i<vc;i++)
		printf("%d ",v[i]);
}
		
	
	