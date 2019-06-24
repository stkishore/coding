#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int i,j,n,m,count=1,k;
	char str[10]="program";
	n=strlen(str);
	for(i=n/2;count<=n;i++)
	{
		if(str[i]=='\0')
			i=0;
		k=n/2;
		for(j=0;j<count;j++)
		{
		
		printf("%c",str[k]);
		k++;
		if(k==n)
			k=0;
		}
		count++;
		printf("\n");
	}
}
		
		