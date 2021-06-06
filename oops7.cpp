#include<bits/stdc++.h>
using namespace std;

class country{
	private:
		int c_no;
		int no_states;
		char sub_name;
    public:
    	void assignPrivate(int i_c_no, int istates)
    	{
    		c_no=i_c_no;
    		no_states= istates;
    	  
		}
		
		void display()
		{
			cout<<"country has"<< no_states<< "states "<< "c_no= "<<c_no;
		}
};


int main()
{
 country india;
 india.assignPrivate(23,28);
 india.display();
}
