//binary search programmer give array
#include<iostream>
using namespace std;
int main()
{
	int high,low,mid,target;
	int a[10]={10,20,30,40,50,60,70,80,90,100};
	
	cout<<"Enter your target element: ";
	cin>>target;
	

	high=10-1;
	low=0;
	mid=(high+low)/2;
	
	if(a[mid]>=target)
	{
		for(int i=0;i<=mid;i++)
		{
			if(target==a[i])
			{
				cout<<"\nYour target elemet's index is: "<<i;
			}
		}
	}
	
	else
	{
		for(int i=mid;i<=high;i++)
		{
			if(target==a[i])
			{
				cout<<"\nYour target elemet's index is: "<<i;
			}
		}	
	}
	
}
