#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int swap;
	swap=*x;
	*x=*y;
	*y=swap;
}
int main()
{
	int a,b;
	cout<<"Enter the Two No:"<<endl;
	cin>>a>>b;
	
	swap(&a,&b);
	
	cout<<"Value of A and B after Swap:"<<a<<" "<<b;
}
