#include <iostream>
using namespace std;

int main() {
	//code
		//code
	int i,j,n,m,m1,n1,n2,a[110],b[110],r1=0,r2=0,s,t,temp;
	cin>>m1;
	for(m=0;m<m1;m++)
	{
	   cin>>n>>n1>>n2;
	   if(!(n1+n2>=n))
	   break;
	   for(i=0;i<n;i++)
	   {
	       cin>>a[i];
	   } 
	   for(i=0;i<n;i++)
	   {
	      cin>>b[i];
	   }
	  for(i=0;i<n;i++)
	   {
	       for (j = i + 1; j < n; ++j)
            {
	      if(a[i]>a[j])
	      {
	          temp=a[i];
	          a[i]=a[j];
	          a[j]=temp;
	      }
            }
	   }
	   temp=0;
	  for(i=0;i<n;i++)
	   {
	       for (j = i + 1; j < n; ++j)
            {
	      if(b[i]>b[j])
	      {
	          temp=b[i];
	          b[i]=b[j];
	          b[j]=temp;
	      }
            }
	   }
	  
	   if(n%2!=0)
	   {
	       s=n/2;
	       for(i=0;i<s;i++)
	       {
	           r1+=a[n-i-1]+b[n-i-1];
	       }
	       r1+=a[s];
	       cout<<r1;
	   }
	   else
	   {
	       t=n/2;
	       t=t-1;
	       for(i=0;i<t;i++)
	       {
	           r2+=a[n-i-1]+b[n-i-1];
	       }
	       r2+=(a[t+1]-a[t]);
	       cout<<r2;
	       
	   }
	   
	}
	return 0;
}