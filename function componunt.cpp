#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the Two No:";
	cin>>a>>b;
	cout<<max(a,b);
	cout<<"max(a,b)"<<c;
}
int max(int x,int y)
{
	if(x>y)
	return x;
	else 
	return y;
	
}
