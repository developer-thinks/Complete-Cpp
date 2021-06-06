#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};

struct node *root;
int len;

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

int length()
{
	int count=0;
	struct node* temp;
	temp=root;
	
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}

	return count;
	
}

void deleting()
{
	struct node* temp;
	int loc;
	temp=root;
	printf("enter the node to delete\n");
	scanf("%d",&loc);
	
	if(loc> length())
	{
		printf("Invalid location\n");
	}
	else if(loc==1)
	{
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);    /* free function */
	}
	
	else
	{
		struct node* p, *q;
		p = root;
		int i=1;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
		
	}
}

void addafter()
{
	int pos,i=1;
	struct node* p;
	p=root;
	printf("enter the position to add element\n");
	scanf("%d",&pos);
	
	if(pos>length())
	{
		printf("invalid location\n");
	}
	
	else
	{
		while(i<pos)
		{
			p=p->link;
			i++;
		}
		
		struct node* temp;
		temp= (struct node*)malloc(sizeof(struct node));
		printf("enter the node data:\n");
		scanf("%d",&temp->data);
		temp->link=NULL;
		
		temp->link=p->link;
		p->link=temp;
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

void reversealist()
{
	struct node* p, *q, *temp;
	int i=0,j;
	p=q=root;
	len=length();
	printf("%d",len);
	j=len-1;
	
	while(i<j)
	{
		int k=0;
		while(k<j)
		{
			q=q->link;
			k++;
		}
		
		temp= p->data;
		p->data=q->data;
		q->data=temp;
		i++;
		j--;
		p=p->link;
		q=root;
	}
}

int main()
{
	int ch;
	
	printf("\nGiven The Linked List Operations\n");
		printf("1.Append\n");
		printf("2.length\n");
		printf("3.display\n");
		printf("4.delete\n");
		printf("5.addafter\n");
		printf("6.swap\n");
		printf("7.reversealist\n");
		printf("8.Quit\n");
	
	while(1)
	{
		
		
			printf("\nEnter the Linked list operation to perform\n");
			scanf("%d",&ch);
			
			
			switch(ch)
				{
				case 1: append();
				 break;
				case 2:len= length();
				printf("the Length of linled list is--> %d",len);
				 break;
				case 3: display();
				 break;
				case 4: deleting();
				break; 
				case 5: addafter();
				break;
				case 6: swap();
				break;
				case 7: reversealist();
				break;
				case 8: exit(1);
				default: printf("Invalid choice\n");
				}			
	}
	
		
	return 0;
}
