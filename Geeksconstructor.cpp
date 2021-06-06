#include<iostream>
using namespace std;

class A
{
	int id;
	static int count;
	
public:
	A(){
		count++;
		id=count;
		cout<<"constructor for id"<<id<<endl;
	}
	
	~A(){
		cout<<"destrictor of id"<<id<<endl;
	}
};

int A:: count =0;

int main()
{
	A a[5];
	return 0;
}
