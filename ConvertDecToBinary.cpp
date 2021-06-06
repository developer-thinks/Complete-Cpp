#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	cout<<"Enter no of test cases "<<endl;
	cin>>tc;
	while(tc--)
	{
	  int n,i;
	  cout<<"Enter value of n "<<endl;
	  cin>>n;
	  vector<int> v;
	  while(n)
	  {
	  	v.push_back(n%2);
	  	n/=2;
	  }
	  
	  reverse(v.begin(), v.end());
	  
	  for(vector<int>::iterator it=v.begin(); it !=v.end(); ++it)
	  {
	  	cout<<*it<<" ";
	  }
	  cout<<endl;
	}
	return 0;
}
