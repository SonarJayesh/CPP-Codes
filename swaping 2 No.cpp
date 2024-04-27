#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the two no:\n";
	cin>>a>>b;
	cout<<"Before swaping\n";
	cout<<"A="<<a;
	cout<<"\nB="<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nAfter swaping:\n";
	cout<<"A="<<a<<"\nB="<<b;
}
