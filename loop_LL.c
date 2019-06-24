#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void insert(struct node** n1,int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	
	struct node * last=*n1;
	newnode->data=data;
	newnode->next=NULL;
	if(*n1==NULL)
	{
	*n1=newnode;
	return ;
	}
	
	while(last->next!=NULL)
		last=last->next;
	last->next=newnode;
	
	return ;
}
void print(struct node * n2)
{
	struct node *n3= n2;
	while(n3!=NULL)
	{
		printf("%d ",n3->data);
		n3=n3->next;
	}
	free(n3);
	free(n2);
}
int detect(struct node *n3)
{
	struct node *slow=n3,*fast=n3;
	
	while(slow && fast  && fast->next )
	{
		
	slow=slow->next;
	fast=fast->next->next;
	
	if(slow==fast)
	{
	printf("%d",slow->data);
	countloop(slow);
	removeloop(n3,slow);
	return 1;

	}
	}

return 0;

	}
	int countloop(struct node* n3)
	{
		int count=1;
		struct node *temp=n3;
		while(temp->next!=n3)
		{
			temp=temp->next;
			count++;
		}
		printf("count is %d",count);
		return 0;
	}
	int removeloop(struct node* loopnode,struct node *head)
	{
		struct node* ptr1=loopnode;
		struct node* ptr2=head;
		while(1)
		{
	while(ptr1->next!=loopnode && ptr1->next!=ptr2)
	{
		ptr1=ptr1->next;
	}
	if(ptr1->next==ptr2)
		break;
	
		ptr2=ptr2->next;
	

		}
		ptr1->next=NULL;
			return 0;
	}
void main()
{
	
	struct node* head=NULL;
	insert(&head,1);
	insert(&head,2);
	insert(&head,3);
	insert(&head,4);
	insert(&head,5);
	head->next->next->next->next->next=head;

	detect(head);
		print(head);
	
}
	
	