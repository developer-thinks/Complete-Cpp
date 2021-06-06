#include<iostream>
#include<string>
using namespace std;

class cricket{
	public:
		string name;
		void display();
	
};

void cricket :: display()
{
	cout<<"name is\t"<<cricket ::name<<endl;
}
int main()
{
	cricket man;
	man.name = "rohit_sharma";
	man.display();
	
	
	return 0;
}
