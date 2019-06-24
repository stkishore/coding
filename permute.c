#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char *a,char *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void permute(char *str,int l,int r)
{
	int i;
	if(l==r)
		printf("%s ",str);
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
	int r;
	char str2[]="abc";
	r=strlen(str2);
	permute(str2,0,r-1);
}