#include<bits/stdc++.h>
using namespace std;

void classInFunction();

class animal
{
	public:
		int age;
		void walk()
		{
			cout<<"animanl walks"<<endl;
		}
	
};

class tiger : virtual public animal  // virtual inherita
{
	
};

class lion :virtual public animal
{
	
};

class ligar: public tiger, public lion
{
	
};

int main()
{
	
	ligar sam;
	sam.walk();
	classInFunction();
}

void classInFunction()
{
	class localclass
	{
	   	public:
	   		int num;
		   void display()
		   {
			cout<<"This class is inside a function and it is local to it"<<endl;   	
			cout<<"number= "<<num<<endl;
		   }	
	};
	
	localclass fun;
	fun.num=28;
	fun.display();
}



