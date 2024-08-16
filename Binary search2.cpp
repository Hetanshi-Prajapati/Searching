//binary search user input //less time complexity 
#include<iostream>
using namespace std;
int main()
{
	int mid,target,high,low,n;
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
		cout<<"\nelement: "<<i<<"is : "<<a[i];
	}
	
	cout<<"Enter the target element: ";
	cin>>target;
	
	high=n-1;
	low=0;
	
	mid=(high+low)/2;
	
	if(a[mid]>=target)
	{
		for(int i=mid;i<=high;i++)
		{
			if(target==a[i])
			{
				cout<<"\nYour target elemet's index is: "<<i;
			}
		}	
	}
	
	else
	{
		for(int i=0;i<=mid;i++)//for(int i=mid;i>=low;i--)
		{
			if(target==a[i])
			{
				cout<<"\nYour target elemet's index is: "<<i;
			}
		}
	}
}
