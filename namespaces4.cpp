#include <iostream> 
using namespace std; 
  
namespace ns 
{ 
    // Only declaring class here 
    class geek; 
} 
namespace ns2
{
	class geek;
}
  
// Defining class outside 
class ns::geek 
{ 
public: 
    void display() 
    { 
        cout << "ns::geek::display()\n"<<endl; 
    } 
}; 

class ns2::geek
{
	public:
		void display()
		{
			cout<<"ns2:geek::display()\n"<<endl;
		}
};
  
using namespace ns;
int main() 
{ 
    //Creating Object of Class geek 
    geek obj; 
    obj.display(); 
    ns2::geek obj;
    obj.display();
    return 0; 
} 
