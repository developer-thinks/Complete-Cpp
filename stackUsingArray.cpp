#include<iostream>
#define MAX 5
using namespace std;

int top=-1,stack1[MAX];
void push();
void pop();
void display();




int main()
{
 int a;
 
 while(1)
 {
 	cout<<"press 1 for push()"<<"\n";
 	cout<<"press 2 for pop()"<<"\n";
 	cout<<"press 3 for display()"<<"\n";
 	cin>>a;
 
 switch(a)
	 {
	 	case 1: push();
	 	break;
	 	case 2: pop();
	 	break;
	 	case 3: display();
	 	break;
	 	case 4: exit(0);
	 	break;
	 	default: cout<<"Invalid choise"<<"\n"; break;
	 }		
 }
}


	void push()
	{
		int value=0;
		if(top==MAX-1)
		{
			cout<<"stack is full"<<"\n";
			
		}
		else{
			cout<<"enter number to push"<<"\n";
			cin>>value;
			top=top+1;
			stack1[top]=value;
			
		}
	}
	
	void pop()
	{
		if(top==-1)
		{
			cout<<"the stack is empty"<<"\n";
			
		}
		else
		{
			cin>>stack1[top];
			top-=1;
		}
	}
	
	void display()
	{
		if(top==-1)
		{
			cout<<"the stack is empty"<<"\n";
			
		}
		else
		{
			cout<<"the stack is "<<"\n";
			
			for(int i=top;i>=0;i--)
			{
				cout<<stack1[i]<<"\n";
			}
		}
	}
	
