#include<iostream>
#include<string>
using namespace std;

class Cricket{
	public:
		string name;
		void display()
		{
			cout<<name<<" Is a cricketer"<<endl;
		}
};

int main()
{
	Cricket rohit;
	Cricket *virat = new Cricket();
	rohit.name = "Rohit Sharma";
	rohit.display();
	
	virat->name = "Virat Kohli";
	virat->display();
	

	
	return 0;
}
