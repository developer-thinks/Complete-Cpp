#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* left, *right;
};

struct node* root;

struct node* create()
{
	int x;
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data(-1 for no node)\n");
	scanf("%d",&x);
	
	if(x==-1)
	{
		return 0;
	}
	
	newnode->data=x;
	printf("Enter left child of %d\n",x);
	newnode->left=create();
	printf("Enetr right child of %d\n",x);
	newnode->right=create();
	printf("new node address is %d\n",newnode);
	return newnode;
}

void preorder( struct node *root)
{
	if(!root)
	{
		return ;
	}
	else
	{
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(struct node* root)
{
	if(!root)
	{
		return ;
	}
	else
	{
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
}

void postorder(struct node* root)
{
	if(root==0)
	{
		return ;
	}
	else
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\n",root->data);
	}	
}

int main()
{
	while(1)
	{
		int ch;
		printf("Tree operatons\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: root=create();
					printf("the newnode address was returned by create function and it is assigned to root\n");
					printf("so newnode address = root as seen \n ");
					printf("root address is %d\n",root);
					break;
			
			case 2:	printf("The pre order traversal of tree\n");
					preorder(root);
					break;
					
			case 3: printf("the inorder traversal of tree\n");
					inorder(root);
					break;
			case 4: printf("the postorder traversal of tree\n");
					postorder(root);
					break;
			
			default: printf(":--Invalid option is choosen\n--:");
		}
	}
	
	
	
	
	return 0;
}
