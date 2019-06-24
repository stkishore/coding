#include<stdio.h>
#include<stdlib.h>
static int i,count;
struct app
{
	int time;
	char name[10];
	char add[20];
}a[10];
void patient()
{
	int ch;
	int flag[a[10].time];
	printf("\nenter the time name and address");
	scanf("%d",&a[i].time);
	scanf("%s",&a[i].name);
	scanf("%s",&a[i].add);
	if(flag[a[i].time]==1)
	{
		printf("\ntime is alloted");
		printf("\npress 1 to enter another time or 0 to exit");
		scanf("%d",&ch);
		if(ch==1)
			patient();
	}
	else
	{
	 flag[a[i].time]=1;
	 printf("appointment booked");
	 count++;
	 i++;
	}
}
void doctor()
{
	
	for(i=0;i<=count;i++)
	{
		printf("\ntime \tname \taddress");
		printf("\n%d",a[i].time);
		printf("\t%s",a[i].name);
		printf("\t%s",a[i].add);
	}
}
	
void main()
{
	int choice,c;
	do{
	printf("\nenter 1 for patient 2 for details");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:patient();
		break;
		case 2:doctor();
		break;
	}
	printf("\npress 1 to continue");
	scanf("%d",&c);
	}while(c==1);
	
}