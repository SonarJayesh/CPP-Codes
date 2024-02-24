#include<iostream>
using namespace std;
int main()
{
	int a[3][3],i,j;
	cout<<"Enter the Array Element:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\n 3x3 Array\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
