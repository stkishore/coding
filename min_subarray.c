#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int a2[],int i2,int n2)
{
int i3,mini=a2[i2];
	 for(i3=i2;i3<n2;i3++)
    {
        printf("%d ",a2[i3]);
    }
	printf("\n");
    for(i3=i2;i3<n2;i3++)
    {
        if(a2[i3]<mini)
            mini=a2[i3];
    }
    return mini;
}
    
    

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,j,n,m,sum=0,a[1000];
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
          sum+=min(a,i,j);   
        }
    }
	printf("\n");
    printf("%d",sum);
    
    
    return 0;
}
