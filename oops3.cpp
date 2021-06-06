#include<iostream>
#include<string>

using namespace std;

class Human{
	private:
		string name;
		int age;
	
	public:
		Human()                                          // 1st constructor
		{
			cout<<"constructor_with_no_args"<<endl;
			age=0;
			name="noname";	
		}
		
		Human(int iage)                                   // 2nd constructor
		{
			cout<<"constructor_with_integer_args"<<endl;
			age=iage;
			name="noname";	
		}
		
		Human(string iname)                                 // 3rd constructor
		{
			cout<<"constructor_with_string_args"<<endl;
			age=0;
			name=iname;	
		}
		
		Human(int iage, string iname)                         // 4th constructor
		{
			cout<<"constructor_with_int and string_args"<<endl;
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
	Human rohit;  // when object rohit is created 1st constructor is called , which takes no parameters.
	rohit.display(); 
	
	Human virat("Kohli"); // when object of vitat is created 3rd constructor is called which takes string as input, so pass string through object virat 
	virat.display();      // now iname = kohli , hence is display function name= kohli is printed;
	
	Human rahul(28);  // when object of rahul is created 2nd constructor is called which takes integer as input, so pass integer through object rahul
	rahul.display(); // now 28 passed is stored in iage,then age = iage , so after calling display age = 28 is displayed.
	
	Human legend( 37, "Dhoni");
	legend.display();
	return 0;
}
