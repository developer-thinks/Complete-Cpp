#include <iostream>
using namespace std;

	int sumofarray(int &arr,int n)
	{
		int sum2;
		for(int i=0;i<n;i++)
		{
		  sum2 -=arr[i] ;
		}
		return sum2;	
	}
	

int main() {
	int arr[]={1,2,3,5};
	int j;
	int n=sizeof(arr)/sizeof(arr[0]);
	n++;
	cout<<n<<endl;
	
	int sum1=n*(n+1)/2;
	cout<<sum1<<endl;
	int sum1=sumofarray(*arr,n);
	
	cout<<sum1<<endl;
	return 0;
}
