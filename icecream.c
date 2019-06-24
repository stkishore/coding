#include<stdio.h>
#include<stdlib.h>


void main()
{
	int i,j,k,total=0,a[10],n;
	printf("enter the customers");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the amount of %d customer",i+1);
		scanf("%d",&a[i]);
		a[i]=total/5;
	}
	i=0;
	if(a[i]==1)
	{
		total+=1;
		printf("\nyes for 1");
	
	}
	else
	{
		printf("\nno");
		exit(1);
	}
	
      if(a[++i]==4)
	  {
		  printf("\nno for 2");
		  exit(1);
	  }
	  else if(a[i]==2)
	  {
		 total=(total-a[i])+a[i];
		  printf("\nyes for 2");
	  }
	  else
	  {
		  total=(total-a[i])+a[i];
		  printf("\nchange is given so,yes for 2");
	  }
	  
		   if(a[++i]==20)
	  {
		  printf("\nno for 3");
		  exit(1);
	  }
	  else if(a[i]==5)
	  {
		  total+=5;
		  printf("\nyes for 3");
	  }
	  else
	  {
		  total+=a[i];
		  printf("\nchange is given so,yes for 3");
	  }
		 
	for( j=2;j<n;j++)
	{
	 total=(total-a[i])+a[i];
		   if(a[j]==4)
	  {
		  
		  printf("\nchange is given so,yes for %d",j);
	  }
	  else if(a[j]==2)
	  {
		  total+=5;
		  printf("\nyes for %d",j);
	  }
	  else
	  {
		  total+=a[j];
		  printf("\nchange is given so,yes for %d",j);
	  }
	}	  
	
	 
	
}
