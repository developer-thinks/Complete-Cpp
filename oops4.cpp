#include<bits/stdc++.h>
using namespace std;
class country
{
	public:
		virtual void setname()=0;
		
};

void country::setname()
{
	cout<<"my country"<<endl;
}

class state : public country
{
	public:
		void setname()
		{
			cout<<"my state"<<endl;
			 country :: setname();
		}
};



int main()
{
state name;	
name.setname();
}
