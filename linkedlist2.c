#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node *head;


void insert(int x)
{
	struct node* link =(struct node*)malloc(sizeof(struct node)); 
	link->data=x;  
	link->next= head;
	head=link;
	printf("%d\n",head);
}


void disp()
{
	struct node* ptr=head;
	printf("list is\n");
	while(ptr!=NULL)
	{
		printf("%d\n",ptr);
		printf("%d\n",ptr->data);
		ptr =ptr->next;
	}
}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	disp();
	
	return 0;
}
