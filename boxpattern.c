#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,n,k,len;
	char str[10]="amar";
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		len=n-1-i;
		
			if(i==0)
			{
				for(j=0;j<n;j++)
				{
				printf("%c",str[j]);
				}
			
			}
			else if(i==(n-1))
			{
				for(j=n-1;j>=0;j--)
				{
				printf("%c",str[j]);
				}
			}
			else
			{
				printf("%c",str[i]);
				for(k=0;k<(n-2);k++)
					printf(" " );
				printf("%c",str[len]);
			}
			printf("\n");
		}
	
}
#include<stdio.h>
#include<stdlib.h>

 void main()
 {
	int i,j,n,m;
	char str[10]="astrid";
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
		n++;
	}
	printf("\n");
	
	for(i=1;i<n-1;i++)
	{
		printf("%c",str[i]);
		for(m=2;m<n;m++)
		{
			printf(" ");
		}
		printf("%c",str[n-1-i]);
		printf("\n");
	}
	
	for(i=n-1;i>=0;i--)
	{
		printf("%c",str[i]);
		
	}
	
	
 }
 
 
		
		
	