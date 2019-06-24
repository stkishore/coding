#include <stdio.h>

int main() {
	int i,j,k,n,arrn,b,count,r[10],m;
	int a[100];
	scanf("%d",&arrn);
	printf("enter the k value");
	scanf("%d",&k);
	for(i=0;i<arrn;i++)
	{
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	     scanf("%d",&a[i]);   
	    }
	    for(i=0;i<n;i++)
	    {
			if(a[i]<k)
			{
	        r[-1]=0;
			m=0;
			count=0;
	        b=a[i];
	         while(b>0)
	         {
	             r[m]=(b%10);
	             b=b/10;
				 m++;
	             count++;
	         }
	         switch(count)
	         {
	             case 1:printf("%d",a[i]);
	             break;
	             case 2:if((r[0]-r[1])==1||(r[0]-r[1])==-1)
	             printf("%d ",a[i]);
	             break;
	             case 3:
				      if((r[0]-r[1])==1&&(r[1]-r[2])==1)
	             printf("%d ",a[i]);
	             else if((r[0]-r[1])==-1&&(r[1]-r[2])==-1)
	             printf("%d ",a[i]);
	             break;
	             
	         }
			}
	    }
	   
	}
	return 0;
}