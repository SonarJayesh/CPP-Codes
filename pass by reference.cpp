#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int swap;
	swap=x;
	x=y;
	y=swap;
	
}
int main()
{
	int a,b;
	cout<<"Enter the value of A & B:"<<endl;
	cin>>a>>b;
	
	swap(a,b);
	cout<<"Value of A & B on Swap "<<a<<" "<<b;
}
