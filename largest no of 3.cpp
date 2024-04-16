#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the three No:\n";
	cin>>a>>b>>c;
	cout<<"A="<<a<<"\nB="<<b<<"\nC="<<c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"\nA is Big";
		}
		else
		{
			cout<<"\n C is Big";
		}
		
	}
	else
	{
		if(b>c)
		{
				cout<<"\nB is Big";	
		}
		else
		{
			cout<<"\nC is Big";
		}
	}
}
