#include<iostream>
#include<time.h>
using namespace std;

long long int gcd(long long int m, long long int n)
{
	clock_t start,end;
	start=clock();
	long int r;
		while(n!=0)
		{
			r=m%n;
			m=n;
			n=r;
		}
		end=clock();
		cout<<endl<<"Time taken:"<<(end-start)/CLK_TCK<<" sec";
		return m;
}

int main()
{
	long long int m,n;
	int g;
	cout<<"Enter the two numbers m= and n="<<endl;
	cin>>m>>n;
	g=gcd(m,n);
	cout<<"GCD of m,n is"<<"\n"<<g;
}
