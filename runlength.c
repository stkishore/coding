#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
		int i,j,no=0;
		char str[10],ch;
		scanf("%s",str);
		for(i=0;str[i];i++)
		{
			ch=str[i];
			no=str[++i]-48;
			while(str[i+1]>='0'&&str[i+1]<='9')
			{
				no=(no*10)+str[++i]-48;
			}
			//printf("%d  ",no);
			while(no!=0)
			{
				printf("%c",ch);
				--no;
			}
		}
}