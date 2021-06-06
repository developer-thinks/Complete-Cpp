#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* head;

void insert(int x)
{
	struct node* link = (struct node*)malloc(sizeof(struct node));
	link->data = x;
	link->next = head;
	head = link;
}

void insert_pos(int value, int position)
{
	int count=0;
	struct node *temp, *current;
	current = head;
	while(current != NULL)
	{
		count++;
		if(count == position-1)
		{
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data= value;
			current->next = temp;
			
		}
		current = current->next;
	}
}

void disp()
{
	struct node* ptr= head;
	while(ptr!= NULL)
	{
		printf("List is- %d\n",ptr->data);
		ptr=ptr->next;
		
	}

}

int main()
{
	insert(10);
	insert(20);
	insert(30);
	disp();
	
	insert_pos(1,2);
	insert_pos(5,3);
	
	return 0;
}
