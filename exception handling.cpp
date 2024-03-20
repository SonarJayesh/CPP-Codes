#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Exicution starting...."<<endl;
	cout<<"Enter thwo no";
	cin>>a>>b;
	
	try
	{
		if(b==0)
		throw b;
		c=a/b;
		cout<<"Result="<<c;
	}
	catch(int x)
	{
		cout<<"can't devide by "<<x;
	}
	cout<<endl<<"Exicution Ended...";
	return 0;
}
