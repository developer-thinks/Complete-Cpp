#include<bits/stdc++.h>
using namespace std;

void rotatearray(int arr[], int n, int d)
{
	int temp[d];
	int m=n-d;
	int i,j,k;
	
	for(i=0;i<d;i++)
	{
		temp[i]=arr[i];
	}

	for(j=0;j<m;j++)             
	{
		arr[j]=arr[j+d];
	}
	for(k=0;k<d;k++)
	{
		arr[j]=temp[k];
	}
	
	cout<<j<<endl;
	
}

void printarray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int d;
	cout<<"enter the val of d to rotate array by d"<<endl;
	cin>>d;
	rotatearray(arr,n,d);
	printarray(arr,n);
}
