#include<stdio.h>
#include<string.h>
void main()
{ 
int i,j,n,k;
	char str[10]="kishore";
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		j=n-1-i;
		for(k=0;k<n;k++)
		{
		if(k==i||k==j)
		{
			printf("%c",str[k]);
		}
		else{
			printf(" ");
		}
		}
		printf("\n");
	}
}