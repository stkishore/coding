#include <stdio.h>

int main() {
	int i,j,k,n,n1,a[1000],b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&n1);
	    for(i=0;i<n1;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<n1;i++)
	    {
	        b[i]=-1;
	    }
	   for(i=0;i<n1;i++)
	   {
	   for(j=i+1;j<n1;j++)    
	   {
	        if(a[i]>a[j])
	        {
	          b[i]=a[j];
	          break;
	        }
	        else
	        {
	            break;
	        }
	        
	    }
	   }
	   
	   for(i=0;i<n1;i++)
	   printf("%d ",b[i]);
	   printf("\n");
	}
	return 0;
}