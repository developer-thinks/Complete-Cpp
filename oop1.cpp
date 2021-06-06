//using virtual functions 

#include<bits/stdc++.h>
using namespace std;

class india
{
 public: 
 		int states;
	virtual	void display()
		{
			cout<<"This is from india"<<endl;	
		}	
};


class karnataka : public india
{
	public:
		int district;
		void display()
		{
			cout<<"This is from karnataka"<<endl;	
		}
};


class maharastra : public india
{
	public:
	int district;
		void display()
		{
			cout<<"This is from maharastra"<<endl;	
		}
};


void newdisplay(india &p)
{
	p.display();
}



int main()
{
karnataka bang;
karnataka belg;
maharastra mumb;
bang.states=30;
//bang.display();
newdisplay(bang);
newdisplay(mumb);
newdisplay(belg);

}
