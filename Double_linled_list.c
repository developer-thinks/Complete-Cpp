#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
	
};

struct node* root=NULL;
int len;

void append()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data\n");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL)
	{
		root=temp;	
	}	
	
	else
	{
		struct node* p;
		p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		
		p->right=temp;
		temp->left=p;
	}
}

void addatbegin()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the node data\n");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL)
	{
		root=temp;
	}
	
	else
	{
		temp->right=root;
		root->left=temp;
		root=temp;
	}
}

int length()
{
	int count=0;
	struct node* p;
	p=root;
	while(p!=NULL)
	{
		count++;
		p=p->right;
	}
	return count;
}

void addafter()
{
	struct node* p, *q, *temp;
	
	int pos,i=1;
	printf("Enter the position after which node to be added\n");
	scanf("%d",&pos);
	
	if(pos>length())
	{
		printf("invalid location\n");
	}
	
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the new node data\n");
		scanf("%d",&temp->data);
		temp->left=NULL;
		temp->right=NULL;
		
		p=root;
	
	while(i<pos)
	{
		p=p->right;
		i++;
	}
	q=p->right;
	
	temp->right=p->right;
	q->left=temp;       /* p->right->left =temp is also correct*/
	temp->left=p;
	p->right=temp;
	
}
}

void display()
{
	struct node* p;
	p=root;
	if(p==NULL)
	{
		printf("Empty List\n");
	}
	
	else
	{
		printf("The list elements are\n");
		while(p!=NULL)
			{
				printf("%d--",p->data);
				p=p->right;
			}		
	}
	
	
}

int main()
{
	int ch;
	while(1)
	{
		printf("\n1.append\n");
		printf("2.addatbegin\n");
		printf("3.display\n");
		printf("4.length\n");
		printf("5.addafter");
		
		printf("\nEnter the choice\n");
		scanf("%d",&ch);

		
		switch(ch)
		{
			case 1:append();	
			break;
			case 2: addatbegin();
			break;
			case 3: display();
			break;
			case 4: len=length();
			printf("length = %d",len);
			break; 
			case 5: addafter();
			break;
			case 6: exit(1);
			default: printf("Invalid choice\n");
		}
	}
	
	
	return 0;
}
