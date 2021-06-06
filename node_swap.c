#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node* link;
};

struct node* root;


void append()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("enter the data of node::-->\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)
	{
		root=temp;
	}
	
	else
	{
		struct node* ptr;
		ptr=root;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=temp;
	}
}

void swap()
{
	int loc,i=1;
	struct node *p,*q,*r;
	printf("enter the location after which 2 nodes will be swapped\n");
	scanf("%d",&loc);
	p=root;
	while(i<loc-1)
	{
		p=p->link;
		i++;
	}
	q=p->link;
	r=q->link;
	printf("The nodes are swapping\n");
	
	q->link=r->link;
	r->link=q;
	p->link=r;
	
}


void display()
{
	struct node* temp;
	temp=root;
	
	if(temp==NULL)
	{
		printf("List is empty\n\n");
	}
	else
	{
		printf("The list elements are:\n");
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);

			temp=temp->link;
		}
	}
}

int main()
{
	int ch;
	
	printf("1->append\n");
		printf("2->swap\n");
		printf("3->display\n");
	while(1)
	{
		
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: append();
			break;
			case 2: swap();
			break;
			case 3:display();
			break;
			default: printf("\ninvalid\n");
		}
	}
	
	
	
	
	

	return 0;
}
