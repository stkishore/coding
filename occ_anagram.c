#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count(char str[],char t[],int n)
{
	int a[26]={0},b[26]={0},i;
	for(i=0;i<n;i++)
	{
		a[str[i]-'a']++;
		b[t[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		printf("\n");
		if(!(a[i]==b[i]))
			return 0;
	}
	
	return 1;
	
}
void main()
{
	int i,j,c=0,n,nt;
	char str[10],t[10],strc[10];
	scanf("%s",str);
	scanf("%s",t);
	n=strlen(str);
	nt=strlen(t);
	for(i=0;i<=n-nt;i++)
	{
		for(j=0;j<nt;j++)
		{
			strc[j]=str[i+j];
		}
		c+=count(strc,t,nt);
	}
	printf("%d",c);
}