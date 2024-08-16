//User can give the array
#include<iostream>
using namespace std;

int main()
{
	int x,n;	
	int a[n];
	
	cout<<"\nEnter the total elements of array: ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter element: ";
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<"\nelement: "<<i<<" "<<"is: "<<a[i];
	}
	
	cout<<"Enter your target element: ";
	cin>>x;
	
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
		{
			cout<<"\nYour target elemet's index is: "<<i;
		}
	}
}
