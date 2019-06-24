#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct val
{
    char arr[10000];
    long int data;
    
}a[10000];

int main() {

    long int i,j,n,m,temp,k=0,n2;
    char temp2[10000];
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i].arr);
        scanf("%ld",&a[i].data);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i].data<a[j].data)
            {
                temp=a[i].data;
                a[i].data=a[j].data;
                 a[j].data=temp;
                
                strcpy(temp2,a[i].arr);
                strcpy(a[i].arr,a[j].arr);
                strcpy(a[j].arr,temp2);
                
            }
        }
		
    }
	for(i=0;i<n;i++)
    {
        printf("%s ",a[i].arr);
    }
	printf("\n");
 
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i].data==a[j].data)
            {
            if(strcmp(a[i].arr,a[j].arr)>0)
            {
                temp=a[i].data;
                a[i].data=a[j].data;
                 a[j].data=temp;
                
                strcpy(temp2,a[i].arr);
                strcpy(a[i].arr,a[j].arr);
                strcpy(a[j].arr,temp2);
				 
            }
               
        }
        }
     }
    
   for(i=0;i<n;i++)
    {
        n2=strlen(a[i].arr);
		for(j=0;a[i].arr[j]!='\0';j++)
		{
			if(a[i].arr[j]>='A'&&a[i].arr[j]<='Z')
			a[i].arr[j]=a[i].arr[j]+32;
		}
    }
	  for(i=0;i<n;i++)
    {
        printf("%s ",a[i].arr);
    }
	
   
    
    return 0;
}
