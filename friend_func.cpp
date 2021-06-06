#include<iostream>
#include<string>
using namespace std;


class Human
{
	string name;
	int age;
	public:
		Human(string iname, int iage)
		{
			name=iname;
			age=iage;
		}
		void tell_me()
		{
			cout<<name<<endl<<age<<endl;
			
		}
		
		
		friend void display(Human man);
		
};

void display(Human man)
{
	cout<<man.name<<endl<<man.age;
}





int main()
{
	Human sam("Rohit",31);
	display(sam);

	
	
	return 0;
}
