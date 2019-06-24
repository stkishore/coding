#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i=0,j=0,n,m,k=0,n1;
	char str[100]="Use iron tail";
	char str2[10][100];
	n=strlen(str);
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			str2[k][j]='\0';
			k++;
			j=0;
		}
		else
		{
			str2[k][j]=str[i];
			j++;
		}
		i++;
	}
	str2[k][j]='\0';
	
	for(i=k;i>=0;i--)
	{
		n1=strlen(str2[i]);
		
		for(j=n1-1;j>=0;j--)
		{
			printf("%c",str2[i][j]);
		}
		printf(" ");
	}
}
		