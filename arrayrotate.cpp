#include<bits/stdc++.h>
using namespace std;

void rotatebyone(int arr[],int n)
{
    int temp=arr[n-1];
    cout<<"arr[n]= "<<temp<<endl;
    int i;
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=temp;
}

void leftrotate(int arr[], int n,int d)
{
    for(int i=0;i<d;i++)
    {
        rotatebyone(arr,n);
    }
    
}
void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    int d;
    cin>>n;
    cin>>d;
    int arr[n]={1,2,3,4,5};

    leftrotate(arr,n,d);
    print(arr,n);
}
