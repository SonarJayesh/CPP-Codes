#include<iostream>
using namespace std;
int main()
{
	int n;
	int fact(int);
	
	cout<<"Enter the Number:";
	cin>>n;
	
	cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;
		
}
int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
