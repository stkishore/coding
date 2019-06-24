#include<stdio.h>
void countDistinct(int a[], int k, int nn)
{
    int n1=0;
    int n2=n1+k-1;
    int count=0;
    int i,j;
    for(i=0;n1<nn&&n2<nn;i++)
    {
        for(j=i+1;j<n2;j++)
        {
           if(a[i]==a[j])
           {
               count++;
           }
        }
    }
	++n1;
    printf("%d",count);
}
int main()
{
    int a[100],n,k,m,i,arrn;
	printf("enter the total no of array");
    scanf("%d",&n);
	printf("enter the array  range");
	scanf("%d",&arrn);
	printf("enter k alue");
    scanf("%d",&k);
	
    for(m=0;m<n;m++)
    { 
    for(i=0;i<arrn;i++)
	{
	scanf("%d",&a[i]);
	}
        countDistinct(a,k,arrn);
    }
    return 0;
}