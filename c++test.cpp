#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v(100);
	v.clear();
	vector<int>::iterator it;
	for(int i=1;i<51;i++)
	{
		v.push_back(i);
	}

	cout<<v.at(24)+v.at(26)<<endl;
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	
	return 0;
}
