#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,n,a=0,r,org,b=0,a1,k;
	printf("enter the number");
	scanf("%d",&n);
	org=n;
	for(k=1;k<4;k++)
	{
		a=0;
	while(n>0)
	{
		r=n%10;
		a=(a*10)+r;
		n=n/10;
	}
	a+=org;
	a1=a;
	
		b=0;
	while(a>0)
	{
		r=a%10;
		b=(b*10)+r;
		a=a/10;
	}

	if(a1==b)
	{
	printf("\nthe answer is %d",a1);
	printf("palindrome");
	exit(1);
}
	else{
		printf("\nnot a palindrome");
	}
	org=a1;
	n=a1;
	
	}
	
}
		