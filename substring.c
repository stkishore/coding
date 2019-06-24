#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main()
{
	int count=1,n,m,i,j=0;
	char str[20],s2[10];
	scanf("%s",str);
	scanf("%s",s2);
	n=strlen(s2);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==s2[j]&&s2[j]!='\0')
			{
				for(m=i+1;m<i+n;m++)
				{
					if(str[m]==s2[++j])
					{
						count++;
					}
					else
						break;
					
						
				}
				if(count==n)
					printf("%d ",i);
				count=1;
				j=0;
			}
		
			
		
			
	}
}
					