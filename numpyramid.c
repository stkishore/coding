#include<stdio.h>
void main()
{
int i,j,k,n,m,space;
printf("enter n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(space=1;space<=n-i;space++)
	{
		printf(" ");
	}


for(j=i;j<=(2*i)-1;j++)
{
printf("%d",j);	
}
for(m=j-2;m>=i;m--)
{
printf("%d",m);	
}
printf("\n");
}
}



