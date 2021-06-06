// Manipulators Functions: setw(), setfill(), setprecition(), setiosflag()
// Manipulator operators : endl(similar to \n in C), ends(similar to \t in C)
// setw() prints the o/p fromright to left.
// setfill works only if setw() was there.
#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	
	cout<<setw(10)<<"rohit"<<endl;
	cout<<setw(10)<<"shikhar"<<endl;
	cout<<setw(10)<<setiosflags(ios::left)<<"rohit"<<endl;
	cout<<setw(10)<<setiosflags(ios::left)<<"rohitsharma"<<endl;
	cout<<setw(10)<<"virat"<<endl;
	cout<<setw(10)<<setiosflags(ios::left)<<"shikhardhawan"<<endl;
	//setiosflags() gives formatted o/p
	
	
	return 0;
}
