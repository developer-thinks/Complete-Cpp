#include<bits/stdc++.h>
using namespace std;

class polygons{
	public:
	int height;
	int width;
	int length;
	int breadth;
	int side;
	int base;
	
	 virtual void area(int a, int b)
	{
		cout<<"area of a polygon"<<endl;
	}
};

class rectangle : public polygons{
	public:
		void area(int a, int b);
		
};

class triangle : public polygons{
	public:
		void area(int base,int height);
		
};

class parallogram : public polygons{
	public:
		void area(int base,int height);
		
};

class square : public polygons{
	public:
		void area(int side1, int side2);
		
};

void rectangle::area(int a, int b)
{
	length=a;
	breadth=b;
	cout<<"AreaOfRectangle="<<length*breadth<<endl;
}

void triangle::area(int base, int height)
{
	
	cout<<"AreaOfTriangle="<<(base*height)/2<<endl;
}

void parallogram::area(int base, int height)
{
	cout<<"AreaOfParallogram="<<base*height<<endl;
}

void square::area(int side1,int side2)
{
	cout<<"AreaOfSquare="<<side1*side2<<endl;
}

int main()
{
	rectangle rect;
	triangle tria;
	parallogram parall;
	square squ;
	polygons *poly1=&rect;
	polygons *poly2=&tria;
	polygons *poly3=&parall;
	polygons *poly4=&squ;
	
	//rect.area();
	poly1->area(3,2);
	poly2->area(2,4);	
	poly3->area(2,4);
	poly4->area(4,4);
	
	
	return 0;
}
