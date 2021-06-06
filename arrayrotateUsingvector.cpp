#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> vec1, int d)
{
	for(int i=0;i<d;i++)
	{
		vec1.push_back(vec1[0]);
		vec1.erase(vec1.begin());
	}
	
	for(int i=0;i<vec1.size();i++)
	{
		cout<<vec1[i]<<" ";
	}
}

int main()
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	int n=vec.size();
	int d=2;
	
	rotate(vec, d%n);
	
}
