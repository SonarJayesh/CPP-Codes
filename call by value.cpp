#include<iostream>
using namespace std;
void swap(int x, int y)
{
	int swap;
	cout<<"Value of X and Y Before Swap"<<x<<" "<<y <<endl;
	swap=x;
	x=y;
	y=swap;
	
	cout<<"Value of X and Y After Swap"<<x<<" "<<y <<endl;
	
}
int main()
{
	int a,b;
	cout<<"Enter the Two No:"<<endl;
	cin>>a>>b;
	
	swap(a,b);
	cout<<"Value of A and B on Swap"<<a<<" "<<b;	
}
