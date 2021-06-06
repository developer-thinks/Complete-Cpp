#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* root=NULL;

void insert()
{
	struct node* temp, *current, *parent;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the node data\n");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	parent=root;
	if(root==NULL)
	{
		root=temp;
	}
	
	else
	{
		current=root;
		
		while(current)
		{
			parent=current;
			if(temp->data>current->data)
			{
				current=current->right;
			}
			else
			{
				current= current->left;
			}
		}
		
		if(temp->data>parent->data)
		{
			parent->right=temp;
		}
		else
		{
			parent->left=temp;
		}
	}
}

void display()
{
	struct node* temp;
	temp=root;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->right;
	}
}

int main()
{
	while(1)
	{
		int ch;
		printf("Enter your choice\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: insert();
			break;
			case 2: display();
			break;
			default : printf("Invalid choice!\n");
		}
	}
	return 0;
}
