#include<iostream>
using namespace std;

namespace first
{
	int value=100;


	namespace second
	{
		int value=200;


		namespace third
		{
			 int value=300;
			
		}
	}
}

using namespace first::second::third;
int main()
{

	cout<<value+1<<endl;
	return 0;
}
