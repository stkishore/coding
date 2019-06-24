#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   long int i,j,n,m,arr[1000],arr2[1000],arr3[1000];
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);    
    }
    
    scanf("%ld",&m);
    if(m--)
    {
     for(i=0;i<4;i++)
    {
        scanf("%ld",&arr2[i]);    
    }
    }
    if(m==1)
    {
     for(i=0;i<5;i++)
    {
        scanf("%ld",&arr3[i]);    
    }
    }
    if(arr2[0]==1)
    {
    for(i=arr2[1];i<=n;i++)
    {
        arr[i-1]+=arr2[2];
    }
    
    printf("%ld ",arr[arr2[3]-1]);
    }
    
    if(m==1)
    {
    for(i=arr3[1];i<=n;i++)
    {
        arr[i-1]-=arr3[2];
    }
    for(i=arr3[1];i<=n;i++)
    {
        arr[i-1]+=arr3[3];
    }
    
     printf("%ld",arr[arr3[4]-1]);
    }
    
    
    return 0;
}
