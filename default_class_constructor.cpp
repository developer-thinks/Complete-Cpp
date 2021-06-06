
//In this example we are passing default parameters to class constructor and creating object without passing any parametrs.

#include<iostream>
#include<string>

using namespace std;

class Human{
	private:
		string name;
		int age;
	
	public:
	/*	Human(){
			cout<<"default_constructor"<<endl;
			name="noname";
			age= 0;
		}
    */
		
		
		Human(string iname="Kohli", int iage=31)                                   // 2nd constructor
		{
			cout<<"constructor_with_integer_args"<<endl;
			age=iage;
			name=iname;
		}
		
		
		void display()
		{
			cout<<name<<endl<<age<<endl;
		}
};


int main()
{
	Human rohit;
	rohit.display();
	/* if we donot create default constructor(in this ex)  and try to create object rohit(ex.) , it giver error
	   bcz there is no function which takes no arguments */
	   
    /* However we can pass default parameters as shown in 2nd constructor we can create object without passing any parameters*/
	
	Human virat;
	virat.display();
	return 0;
}
