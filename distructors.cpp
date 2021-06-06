#include<iostream>
#include<string>

using namespace std;

class Human{
	
	private:
		char *s;
		int size;
	public:
		Human(char *);
	   ~Human();
			
};

Human :: Human(char *c)
{
	size=strlen(c);
	s=new char[size+1];
	strcpy(s,c);
}
int main()
{
	Human *rohit;
	rohit = new Human();
	delete rohit;
	return 0;
}
