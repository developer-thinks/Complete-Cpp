#include<iostream>
using namespace std;


namespace first_space{
	void func()
	{
		cout<<"First_namespace_is_called"<<endl;
	}


	namespace second_space {
	   void func()
	    {
	      cout <<"second_space_is_called"<< endl;
	   	}
	}
}

using namespace first_space::second_space;

int main()
{
	func();
	
	
	return 0;
}
