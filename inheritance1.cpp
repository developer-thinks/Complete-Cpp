#include<bits/stdc++.h>
using namespace std;

class person{
	
	protected: 
	string name;
	
	public:
		void setname(string iname){
			name= iname;
		}
};

class student: public person{
	public:
		void display()
		{
			cout<<"its me "<<name<<endl;
		}
};

int main()
{
person sam;
//sam.name="sammed";	 this gives error as name is protected....
sam.setname("sammed");

student ram;
//ram.setname("hitman");
ram.display();
}
