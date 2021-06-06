#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* head;


void begininsert(int item)
{
	struct node* ptr= (struct node*)malloc(sizeof(struct node));
	
	if(ptr==NULL)
	{
		pritf("--");
	}
	else
	{
		ptr->data= item;
		ptr->next=head;
		head=ptr;
	}
}

int main()
{
	int choice,item;
	do
	{
		printf("Enter no. to insert\n");
		scanf("%d",&item);
		begininsert(item);
		printf("end");
	}while(choice==0);
	return 0;
}
