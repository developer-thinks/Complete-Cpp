#include<bits/stdc++.h>

using namespace std;

int main()
{
	deque<int> dq;
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);
	dq.push_front(10);

	for(deque<int>:: iterator it=dq.begin();it!=dq.end();it++)
	{
		cout<<*it<<endl;
	}
}
