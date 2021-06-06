#include<bits/stdc++.h>
using namespace std;

int main()
{
	float a,b;
	cin>>a;
	
	vector<int> ab(3);
	ab.push_back(11);
	ab.push_back(21);
	ab.push_back(31);
	
	for(vector<int> it=ab.begin();it!=ab.end();++it)
	{
		cout<<*it<<endl;
	}

	cout<<fixed<<setprecision(4)<<a<<endl;
	cout<<scientific<<setprecision(4)<<a<<endl;
	
	return 0;
}
