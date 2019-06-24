#include<stdio.h>
#include<stdlib.h>
#define R 3
#define C 4 
void main()
{
	int i=0,j=0,n,m,k,i2=0,j2=0;
	int a[R][C]={	   {1, 2, 3, 4}, 
                       {5, 6, 7, 8}, 
                       {9, 10, 11, 12}, 
                       
                      }; 
					   printf("%d",a[i][j]);
					   printf("\n");
					  for(k=1;k<R+C-1;k++)
					  {
						 
						  i=++i2;
						  j=0;
						  while(i>=0 && j<C && i<R)
						  {
							  printf("%d ",a[i][j]);
							  j++;
							  i--; 
						  }
						  
						  if(k==R-1)
							  break;
					    printf("\n");
					  }
					 //printf("%d",k);
					  printf("\n");
					   
					 
					  for(k=R-1;k<R+C-1;k++)
					  {
						  i=R-1;
						  j=++j2;
						  while(i>=0 && j<C && i<R)
						  {
						  printf("%d ",a[i][j]);
						  i--;
						  j++;
						  }
						  if(k!=R+C-2)
						  printf("\n");
					  }
					  
}

	