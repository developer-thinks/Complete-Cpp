#include<iostream>
using namespace std;

class gcd
{

	public:
		
		int find_gcd(int , int );
	
		
};


int gcd:: find_gcd(int m, int n)
{
	while(n!=0)
	{
		int r;
		r=m%n;
		m=n;
		n=r;
	}
	return m;
}


int main()
{
	gcd integers;
	int m,n;
	cout<<"Enter two integers"<<endl;
	cin>>m>>n;
	int p=integers.find_gcd(m,n);
	cout<<p<<endl;
	
}
