#include<bits/stdc++.h>
using namespace std;

int gcd(int m, int n)
{
	if(n==0)
	{
		return m;
	}
	
	return gcd(n, m%n);
	
}

void rotatearray(int arr[],int n,int k)
{
	int d=-1,i,j,temp;
	for(i=0;i<gcd(n,k);i++)
	{
		j=i;
		temp=arr[0];
		
		while(1)
		{
			d=(j+k)%n;
			if(d==i)
			 break;
			
			arr[j]=arr[d];
			j=d;
		}
		arr[j]=temp;
	}
	
}

void reversearray(int arr[],int n)
{
	reverse(arr,arr+n);
}


print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"";
	}
	cout<<endl;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	rotatearray(arr,n,k); 
	cout<<"Array after rotation:"<<endl;
	print(arr,n);
	reversearray(arr,n);
	cout<<"Array after reversal:"<<endl;
	print(arr,n);
}
