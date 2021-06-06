#include<iostream>
using namespace std;


int search(int arr[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
			return i;
	return -1;	
	}
}

int main()
{
	int arr[]={10,30,23,45,56,76};
	int key;
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter the value to search"<<endl;
	cin>>key;
	int result= search(arr,n,key);
	(result==-1)? cout<<"The element not found": cout<<"Element is found at- "<< result <<" position";
	
	
	return 0;
	
}
