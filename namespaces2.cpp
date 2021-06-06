#include<iostream>
using namespace std;

namespace first
{
	int value=100;
}

namespace second
{
	int value=200;
}

int main()
{
	int value=300;
	cout<<first::value<<endl;
	cout<<second::value<<endl;
	cout<<value<<endl;
	return 0;
}
