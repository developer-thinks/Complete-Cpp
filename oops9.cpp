// pointers to base class
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
    {
	   width=a;
	   height=b;
    }
};

class Rectangle: public Polygon {
  public:
    int area()
    {
	   return width*height;
	}
};

class Triangle: public Polygon {
  public:
    int area()
    {
	 return width*height/2;
	}
};

int main () {
  Rectangle rect;
  Triangle trgl;
  Polygon * ppoly1 = &rect; //pointer to base class 
// Rectangle  *ppoly1 =&rect;  // pointer to subclass which is a Rectangle
  Polygon * ppoly2 = &trgl;
  ppoly1->set_values (4,5);  // this is same as::  rect.set_values (4,5);
  ppoly2->set_values (4,5);
  /*the type of ppoly1 and ppoly2 is pointer to Polygon (and not pointer to Rectangle nor pointer to Triangle),
    only the members inherited from Polygon can be accessed, and not those of the derived classes Rectangle and Triangle.
    That is why the program above accesses the area members of both objects using rect and trgl directly,
	instead of the pointers; the pointers to the base class cannot access the area members.
  */
  cout << rect.area() << '\n';
  // if we create pointer to the rect class then we can write above statement as
  // cout<<ppoly1->area()<<endl;
  cout << trgl.area() << '\n';
  
 /* Member area could have been accessed with the pointers to Polygon if area were a member of Polygon instead of a member
   of its derived classes, but the problem is that Rectangle and Triangle implement different versions of area, therefore
   there is not a single common version that could be implemented in the base class.
*/
  return 0;
}
