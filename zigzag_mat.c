#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,l,m=3,n=4,result[26],a2[1000],R,C;
	int a[][4] = { { 1, 2, 3,4 }, 
                        { 5,6,7,8 }, 
                        { 9,10,11,12 } }; 
  
       for(i=0;i<(m*n-1);i++)
	   {
		   if(i%2==0)
		   {
			   R=i<m?i:m-1;
			   C=i<m?0:i-m+1;
			   while(R>=0&&C<n)
				   a2[k++]=a[R--][C++];
		   }
		   else
		 {	
			   R=i<n?0:i-n+1;
			   C=i<n?i:n-1;
			   while(C>=0&&R<m)
				   a2[k++]=a[R++][C--];
		   }
	   }
	   for(i=0;i<k;i++)
	   printf("%d ",a2[i]);
	   return 0;
}