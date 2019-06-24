#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};

struct node* newnode(int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return newnode;
}
	
struct node* insert(struct node* node,int key)
{
	if(node==NULL)
		return newnode(key);
	if (key < node->data)
		node->left=insert(node->left,key);
	else if(key > node->data)
		node->right=insert(node->right,key);
	return node;
}
void inorder(struct node* root)
{
	if(root!=NULL)
	{
	
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
	}
}
		
void main()
{
	struct node *root=NULL;
	root=insert(root,50);
	insert(root,30);
	insert(root,20);
	insert(root,40);
	insert(root,70);
	insert(root,60);
	insert(root,80);
	
	inorder(root);
	
}