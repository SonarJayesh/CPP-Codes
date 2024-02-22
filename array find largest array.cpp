#include<iostream>
using namespace std;
int main()
{
	int a[5],i,large;
	cout<<"\n Enter the Array Element:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		large=a[0];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	cout<<"\n Largest array element="<<large;
}
