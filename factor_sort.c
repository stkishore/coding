#include<stdio.h>
void main()
{
int i,j,n,k=0,a[10],b[10],count[10],temp,t2,m,c;
printf("enter the total elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
	
for(j=1;j<=a[i];j++)
{
	if((a[i]%j)==0)
	{
		b[i]+=j;	
		c++;
	}
}
count[i]=c;
c=0;
}
for(i=0;i<n;i++)
{ 
for(j=0;j<n;j++)
{
	if(count[i]<count[j])
	{
		temp=count[i];
		count[i]=count[j];
		count[j]=temp;
		t2=a[i];
		a[i]=a[j];
		a[j]=t2;
	}
}
}
for(m=0;m<n;m++)
{
	printf("%d",a[m]);
	printf("\n");
}
}

