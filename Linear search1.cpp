//Linear search: programmer give the array and user give the arget element
#include<iostream>
using namespace std;
int main()
{
	int x;
	//int a[10]={10,20,30,40,50,60,70,80,90,100};
	int a[10]={50,60,80,70,40,30,10,20,90,100};
	
	cout<<"Enter your target element: ";
	cin>>x;
	
	for(int i=0;i<10;i++)
	{
		if(x==a[i])
		{
			cout<<"\nYour target elemet's index is: "<<i;
		}
	}
}
